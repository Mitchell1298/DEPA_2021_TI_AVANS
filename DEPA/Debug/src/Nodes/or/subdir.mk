################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nodes/or/Or.cpp 

OBJS += \
./src/Nodes/or/Or.o 

CPP_DEPS += \
./src/Nodes/or/Or.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nodes/or/%.o: ../src/Nodes/or/%.cpp src/Nodes/or/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


