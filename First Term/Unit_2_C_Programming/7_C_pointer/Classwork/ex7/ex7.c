/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>
#include "conio.h"
/*
 *	*px = &x ----> means issue read/write the VALUE of what inside X variable
 *	printf(*px) ----> means issue read the VALUE stored in the pointer px
 *	printf(*px = 5) ----> means issue write a VALUE "5" at in the pointer px
 *	& ---> means address
 * */
struct SDataSet{
	unsigned char data1;
	unsigned int data2;
	unsigned char data3;
	unsigned short data4;
};
struct SDataSet data1;
void print_memory_range(char* base, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%p \t %x \n",base, (unsigned char)*base);
		base++;
	}
}
void main(){
	data1.data1=0x11;
	data1.data2=0xFFFFEEEE;
	data1.data3=0x22;
	data1.data4=0xABCD;
	print_memory_range(&data1, sizeof(data1));

	char* p=&data1;
	printf("p+8=%x \n",(unsigned char)*(p+8));
	struct SDataSet* PStruct = &data1;
	printf("p+8=%x \n",(unsigned char)PStruct->data3);
}
