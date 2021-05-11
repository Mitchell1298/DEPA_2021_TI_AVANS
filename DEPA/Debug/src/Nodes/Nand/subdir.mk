################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nodes/Nand/Nand.cpp 

OBJS += \
./src/Nodes/Nand/Nand.o 

CPP_DEPS += \
./src/Nodes/Nand/Nand.d 


# Each subdirectory must supply rules for building sources it contributes
src/Nodes/Nand/%.o: ../src/Nodes/Nand/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


