################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/22i-1042_lab06_A.cpp \
../src/q2.cpp 

CPP_DEPS += \
./src/22i-1042_lab06_A.d \
./src/q2.d 

OBJS += \
./src/22i-1042_lab06_A.o \
./src/q2.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/22i-1042_lab06_A.d ./src/22i-1042_lab06_A.o ./src/q2.d ./src/q2.o

.PHONY: clean-src

