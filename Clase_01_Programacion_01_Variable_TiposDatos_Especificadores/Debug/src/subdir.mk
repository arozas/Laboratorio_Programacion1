################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Clase_01_Programacion_01_TiposDatos.c 

C_DEPS += \
./src/Clase_01_Programacion_01_TiposDatos.d 

OBJS += \
./src/Clase_01_Programacion_01_TiposDatos.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Clase_01_Programacion_01_TiposDatos.d ./src/Clase_01_Programacion_01_TiposDatos.o

.PHONY: clean-src

