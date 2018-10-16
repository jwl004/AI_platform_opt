#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"PCIE_test.h"

void PCIE_test(){

	printf("PCIE type is: \n");
	//system("dmidecode | grep -1 PCI Express");
	system(" dmidecode --type 9 ¨C jamespo | grep PCI |uniq ");	

	printf("PCIE number is: \n");
	system("dmidecode --type 9 ¨C jamespo | grep PCI -c");
	
}
