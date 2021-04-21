################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nodes/Nor/Nor.cpp 

OBJS += \
./src/Nodes/Nor/Nor.o 

CPP_DEPS += \
./src/Nodes/Nor/Nor.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nodes/Nor/%.o: ../src/Nodes/Nor/%.cpp src/Nodes/Nor/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


