// Temp.c

// 1. Include section

#include "Temp.h"

// 2. Variable declaration section

uint32_t ui32_ADC0_vector; 				// Sample buffer (size = number of samples)

static float f_TempCelsius; 			// Temperature variable
static uint32_t ui32_temp_intpart;		// Integer part of temperature
static uint32_t ui32_temp_decpart;		// Decimal part of temperature

// 3. Function declaration section

// 3.1. Configure the ADC0 peripheral

void ConfigLib_Temp_ADC0Set(void)
{
	SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);		// Enable ADC0 peripheral
	SysCtlDelay(ADC_INITDELAY_CYCLES);				// 300 cycle delay to stabilize peripheral before further configuration

	// Select sequencer 3 (1 sample, FIFO = 1), ADC sequence triggered by the processor, highest priority
	ADCSequenceConfigure(ADC0_BASE, ADC_SEQUENCE, ADC_TRIGGER_PROCESSOR, ADC_STEP);

	// Sample the temperature sensor, set the interrupt flag only when the sampling is done and
	// set this step as the last conversion step to the ADC0 sequencer
	ADCSequenceStepConfigure(ADC0_BASE, ADC_SEQUENCE, ADC_STEP, (ADC_CTL_TS | ADC_CTL_IE | ADC_CTL_END));

	// Enable ADC0 sequencer
	ADCSequenceEnable(ADC0_BASE, ADC_SEQUENCE);

	// Clear the interrupt status flag before we sample
	ADCIntClear(ADC0_BASE, ADC_SEQUENCE);
}

// 3.2. Activate ADC0 to measure temperature sample

void ConfigLib_Temp_Measure(void)
{
	ADCSequenceEnable(ADC0_BASE, ADC_SEQUENCE);

	// Clear ADC interrupt flag
	ADCIntClear(ADC0_BASE, ADC_SEQUENCE);

	// Enable ADC acquisition
	ADCProcessorTrigger(ADC0_BASE, ADC_SEQUENCE);

	// While interrupt flag is not clear, wait
	while(!ADCIntStatus(ADC0_BASE, ADC_SEQUENCE, false))
	{

	}
	// Put measured value in the sample buffer
	ADCSequenceDataGet(ADC0_BASE, ADC_SEQUENCE, &ui32_ADC0_vector);

	// Convert binary to float value
	f_TempCelsius = (1475 - ((2475 * ui32_ADC0_vector)) / 4096)/10;

	// Split integer and decimal parts from float value
	ui32_temp_intpart = (uint32_t) f_TempCelsius;
	ui32_temp_decpart = (uint32_t)(f_TempCelsius * 10) - ui32_temp_intpart;

	// Disable ADC0 sequencer
	ADCSequenceDisable(ADC0_BASE, ADC_SEQUENCE);
}

// 3.3. Return integer part of temperature

uint32_t ui32_TempCelsius_IntegerPart_Read(void)
{
	return(ui32_temp_intpart);
}

// 3.4. Return decimal part of temperature

uint32_t ui32_TempCelsius_DecimalPart_Read(void)
{
	return(ui32_temp_decpart);
}
