################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nodes/Not/Not.cpp 

OBJS += \
./src/Nodes/Not/Not.o 

CPP_DEPS += \
./src/Nodes/Not/Not.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nodes/Not/%.o: ../src/Nodes/Not/%.cpp src/Nodes/Not/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


