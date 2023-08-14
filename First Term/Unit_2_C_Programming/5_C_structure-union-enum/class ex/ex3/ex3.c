/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: Kamel
 */
/*
 * Employee sort with structures sort with ages
 * */
#include "stdio.h"
#include "string.h"
#include <math.h>
#include "conio.h"

struct SEmployee{
	char m_Name[50];
	int m_BirthDateDay;
	int m_BirthDateMonth;
	int m_BirthDateYear;
	int m_Salary;
};

int main() {
  struct SEmployee employees[5], tempEmployee;
  int count=0, i, j;
  char firstName[50], secondName[50];

  do{
	  fflush(stdin);fflush(stdout);
	  printf("Enter employee first name:");
	  fflush(stdin);fflush(stdout);
	  scanf("%s", &firstName);

	  printf("Enter employee second name:");
	  fflush(stdin);fflush(stdout);
	  scanf("%s", &secondName);

	  strcpy(employees[count].m_Name, firstName);
	  strcat(employees[count].m_Name," ");
	  strcpy(employees[count].m_Name, secondName);

	  printf("Enter employee birthday (day/month/year) example(23/3/1970):");
	  fflush(stdin);fflush(stdout);
	  scanf("%d/%d/%d", &employees[count].m_BirthDateDay, &employees[count].m_BirthDateMonth, &employees[count].m_BirthDateYear);

	  fflush(stdin);fflush(stdout);
	  printf("Enter employee salary:");
	  fflush(stdin);fflush(stdout);
	  scanf("%d", &employees[count].m_Salary);
	  fflush(stdin);fflush(stdout);
	  count++; if(count==5)break;

	  printf("Do you want to add more, press 'y' to continue?\r\n");
	  fflush(stdin);fflush(stdout);
  }while(getchar()=='y');

  for(i=0; i<count-1; i++){
	  for(j=i+1;j<count;j++){
		  if(employees[i].m_BirthDateYear>employees[j].m_BirthDateYear ||
				  (employees[i].m_BirthDateYear==employees[j].m_BirthDateYear &&
						  employees[i].m_BirthDateMonth>employees[j].m_BirthDateMonth) ||
						  (employees[i].m_BirthDateYear==employees[j].m_BirthDateYear &&
								  employees[i].m_BirthDateMonth==employees[j].m_BirthDateMonth
								  	&& employees[i].m_BirthDateDay>employees[j].m_BirthDateDay))
		  {
			  tempEmployee = employees[i];
			  employees[i]=employees[j];
			  employees[j]=tempEmployee;
		  }
	  }
  }

  for(i=0;i<count;i++){
	  printf("%s\t%d/%d/%d\t%d\r\n",
	  employees[i].m_Name, employees[i].m_BirthDateDay,employees[i].m_BirthDateMonth,employees[i].m_BirthDateYear,employees[i].m_Salary);
  }
  return 0;
}
