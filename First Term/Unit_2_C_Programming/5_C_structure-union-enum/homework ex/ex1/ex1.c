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

struct student{
	char name[50];
	int roll;
	float marks;
};

void main(){
	struct student s;
	printf("Enter information of students:\n\n");
	printf("Enter name:");
	fflush(stdin);fflush(stdout);
	scanf("%s", &s.name);
	fflush(stdin);fflush(stdout);
	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%D",&s.roll);
	fflush(stdin);fflush(stdout);
	printf("Enter mark: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.marks);
	fflush(stdin);fflush(stdout);
	printf("\nDisplaying information\n");
	printf("Name: %s\n",s.name);
	printf("Roll: %d\n",s.roll);
	printf("Marks: %.2f\n",s.marks);
}
