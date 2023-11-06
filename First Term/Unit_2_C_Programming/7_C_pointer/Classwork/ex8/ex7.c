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
struct SPerson{
	char m_Name[18];
	int m_ID;
	char m_Age;
	short m_Salary;
	double m_Weight;
};

void main(){
	struct SPerson manager={"Mohamed Hady", 162, 39, 3000, 79.5};
	struct SPerson employees[]={
			{"Mostafa Said", 163, 30, 1500, 81.0},
			{"Ahmed Salah", 164, 25, 1200, 91.0},
			{"Safa Fayez", 165, 28, 1400, 65.0}};
	int i;
	struct SPerson* p;
	p= &manager;
	printf("manager: %s, %d, %d, %d, %lf\r\n",p->m_Name, p->m_ID, (int)p->m_Age,(int)p->m_Salary,p->m_Weight);
	p->m_Salary=4000;
	printf("manager: %s, %d, %d, %d, %lf\r\n",p->m_Name, p->m_ID, (int)p->m_Age,(int)p->m_Salary,p->m_Weight);
	p=employees;
	for(i=0;i<sizeof(employees)/sizeof(struct SPerson);i++,p++){
		printf("employee: %d: %s, %d, %d, %d, %lf\r\n",i+1 ,p->m_Name, p->m_ID, (int)p->m_Age,(int)p->m_Salary,p->m_Weight);

	}
}
