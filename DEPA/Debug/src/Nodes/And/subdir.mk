################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nodes/And/And.cpp 

OBJS += \
./src/Nodes/And/And.o 

CPP_DEPS += \
./src/Nodes/And/And.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nodes/And/%.o: ../src/Nodes/And/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


