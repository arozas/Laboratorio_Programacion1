################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Clase_02_Programaciion_Tarea_Calculadora.c \
../src/Entrada.c \
../src/Operaciones.c \
../src/Validaciones.c 

C_DEPS += \
./src/Clase_02_Programaciion_Tarea_Calculadora.d \
./src/Entrada.d \
./src/Operaciones.d \
./src/Validaciones.d 

OBJS += \
./src/Clase_02_Programaciion_Tarea_Calculadora.o \
./src/Entrada.o \
./src/Operaciones.o \
./src/Validaciones.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Clase_02_Programaciion_Tarea_Calculadora.d ./src/Clase_02_Programaciion_Tarea_Calculadora.o ./src/Entrada.d ./src/Entrada.o ./src/Operaciones.d ./src/Operaciones.o ./src/Validaciones.d ./src/Validaciones.o

.PHONY: clean-src

