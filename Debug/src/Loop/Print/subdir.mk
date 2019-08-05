################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Loop/Print/Print.c \
../src/Loop/Print/Screens.c 

OBJS += \
./src/Loop/Print/Print.o \
./src/Loop/Print/Screens.o 

C_DEPS += \
./src/Loop/Print/Print.d \
./src/Loop/Print/Screens.d 


# Each subdirectory must supply rules for building sources it contributes
src/Loop/Print/%.o: ../src/Loop/Print/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall -Wextra  -g3 -DEK_TM4C123GXL -DPART_TM4C123GH6PM -DTARGET_IS_BLIZZARD_RB1 -DUART_BUFFERED -DPART_IS_BLIZZARD_RA1 -I"C:\ti\TivaWare_C_Series-2.1.4.178" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


