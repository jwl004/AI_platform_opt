#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"DISK_test.h"

void DISK_test(){

	printf("DISK number and capacity: \n");
	system(" fdisk -l |grep 'Disk /dev/sd' ");

	//printf("DISK type is: \n");
	//system("hdparm -i /dev/sdb |grep "Model"");
	//system("hdparm -i /dev/sda | grep "Model"");

	//Test the I/O read speed:
	//system("hdparm - t --direct /dev/sda");
	//system("hdparm - t --direct /dev/sdb");


	//Test the I/O write speed:
//	system("sync;/usr/bin/time -p bash -c "(dd if = / dev / zero of = test.dd  bs = 1000K count = 20000; sync)"");
		

	

}
