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
struct SDate{
	int m_Day;
	int m_Month;
	int m_Year;
};
struct SStudent{
	char m_Name[256];
	char m_Description[8192];
	struct SDate m_BirthDate;
	double m_Degree[10];
	double m_TotalDegrees;
};

struct SStudent SLowUpdateTotalDegree(struct SStudent student){
	student.m_TotalDegrees=0;
	int i=0;
	for(i=0;i<10;i++){
		student.m_TotalDegrees += student.m_Degree[i];
	}
	return student;
}

void FastUpdateTotalDegree(struct SStudent* pStudent){
	pStudent->m_TotalDegrees=0;
	int i=0;
	for(i=0;i<10;i++){
		pStudent->m_TotalDegrees += pStudent->m_Degree[i];
	}
}

void main(){
	struct SStudent s={"Ahmed Said","Ahmed's description", {22,12,1990}, {88, 98, 88, 92, 98, 87, 66, 94, 87, 99}};
	/* Method 1: Without Pointers */
	s= SLowUpdateTotalDegree(s);
	printf("Total degrees of %s is %2.2lf (%2.2lf%%)\r\n",s.m_Name, s.m_TotalDegrees, (double)(100.0*s.m_TotalDegrees/1000.0));

	/* Method 2: With Pointers */
	FastUpdateTotalDegree(&s);
	printf("Total degrees of %s is %2.2lf (%2.2lf%%)\r\n",s.m_Name, s.m_TotalDegrees, (double)(100.0*s.m_TotalDegrees/1000.0));
}
