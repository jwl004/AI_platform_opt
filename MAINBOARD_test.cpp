#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"MAINBOARD_test.h"

void MAINBOARD_test(){

	printf("MAINBOARD type is: \n");
	system("dmidecode --string baseboard-manufacturer");
	system("dmidecode --string baseboard-Product-Name");

	printf("BIOS type is: \n");
	system("dmidecode -t 0 | grep Vendor");

	printf("MAINBOARD type is: \n");
	system("lspci | grep -i host\\ bridge");

	printf("PCI information is: \n");
//	system("lspci | grep PCI");

}
