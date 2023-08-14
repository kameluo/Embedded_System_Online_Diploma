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

enum Gender{MALE, FEMALE};

struct SPerson{
	char m_Name[100];
	enum Gender m;
};

void main(){
	int i;
	struct SPerson persons[]={{"Ahmed Ali", MALE},{"MONA MOHAMED",FEMALE}};

	for(i=0;i<sizeof(persons)/sizeof(struct SPerson);i++){
		printf("%s - %s\n",persons[i].m_Name, (persons[i].m==MALE)?"MALE":"FEMALE");
	}
}
