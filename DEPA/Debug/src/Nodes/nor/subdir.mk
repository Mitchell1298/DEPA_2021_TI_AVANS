################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nodes/nor/Nor.cpp 

OBJS += \
./src/Nodes/nor/Nor.o 

CPP_DEPS += \
./src/Nodes/nor/Nor.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nodes/nor/%.o: ../src/Nodes/nor/%.cpp src/Nodes/nor/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


