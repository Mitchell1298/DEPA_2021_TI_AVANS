################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nodes/Or/Or.cpp 

OBJS += \
./src/Nodes/Or/Or.o 

CPP_DEPS += \
./src/Nodes/Or/Or.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nodes/Or/%.o: ../src/Nodes/Or/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


