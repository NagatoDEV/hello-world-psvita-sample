/*
 * main.c
 *
 *  Created on: March 11, 2022
 *      Author: Nagato
 */

#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <stdio.h>

#include "../common/debugScreen.h"


#define printf psvDebugScreenPrintf

int main(int argc, char *argv[]) {
	psvDebugScreenInit();
	printf("Hello world sample, for the PlayStation Vita.\n");
	printf("Hello, this is Nagato!\n");
	printf("Follow me on my official Twitter @ NagatoRevenge\n");
	sceKernelDelayThread(5*1000000); // Wait for 3 seconds
	sceKernelExitProcess(0);
	return 0;
}
