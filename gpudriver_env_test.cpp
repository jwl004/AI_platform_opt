#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"gpudriver_env_test.h"

void gpudriver_env_test(){

	printf("GPU driver Version is: \n");
	system("cat /proc/driver/nvidia/version ");

}
