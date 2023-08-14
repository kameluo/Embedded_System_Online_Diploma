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

struct SStudent{
	char name[50];
	int roll;
	float marks;
};

void main(){
	int i;
	struct SStudent s[10];
	printf("Enter Enter information of students:\n");
	for(i=0;i<10;++i){
		s[i].roll=i+1;
		printf("\nFor roll number %d\n",s[i].roll);
		printf("Enter name:");
		fflush(stdin);fflush(stdout);
		scanf("%s",&s[i].name);
		fflush(stdin);fflush(stdout);
		printf("Enter marks:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&s[i].marks);
		fflush(stdin);fflush(stdout);
		printf("\n");
	}
	printf("Displaying information of students:\n\n");
	for(i=0;i<10;++i){
		printf("\nInformation for roll number %d:\n",i+1);
		printf("Name:");
		puts(s[i].name);
		printf("Marks:%.1f",s[i].marks);
	}
}
