################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/Loop/Read/subdir.mk
-include src/Loop/Print/subdir.mk
-include src/Loop/Eval/subdir.mk
-include src/Config/Temp/subdir.mk
-include src/Config/Core/subdir.mk
-include src/Config/Comm/libs/subdir.mk
-include src/Config/Comm/subdir.mk
-include src/subdir.mk
-include .metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
Tiva_REPL.bin \

SECONDARY_SIZE += \
Tiva_REPL.siz \


# All Target
all: Tiva_REPL.elf secondary-outputs

# Tool invocations
Tiva_REPL.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C Linker'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall -Wextra  -g3 -T TM4C123GH6PM.ld -nostartfiles -Xlinker --gc-sections -L../ldscripts -L"C:\ti\TivaWare_C_Series-2.1.4.178\driverlib\gcc" -Wl,-Map,"Tiva_REPL.map" --specs=nano.specs --specs=rdimon.specs -o "Tiva_REPL.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Tiva_REPL.bin: Tiva_REPL.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O binary "Tiva_REPL.elf"  "Tiva_REPL.bin"
	@echo 'Finished building: $@'
	@echo ' '

Tiva_REPL.siz: Tiva_REPL.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "Tiva_REPL.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS) Tiva_REPL.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
