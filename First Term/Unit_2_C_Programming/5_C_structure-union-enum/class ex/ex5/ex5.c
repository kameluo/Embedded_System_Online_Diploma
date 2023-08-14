/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */
/*
 * Using structures with function
 * */
#include "stdio.h"
#include "string.h"
#include <math.h>
#include "conio.h"

struct SDate{
	int m_Day;
	int m_Month;
	int m_Year;
};

struct SEmployee{
	char m_Name[50];
	struct SDate m_BirthDate;
	struct SDate m_GraduationDate;
	int m_Salary;
};

struct SDate ReadDate(char dateName[]){
	struct SDate date;
	fflush(stdin);fflush(stdout);
	printf("Enter %s birthday (day/month/year) example(23/3/1970):",dateName);
	fflush(stdin);fflush(stdout);
	scanf("%d/%d/%d", &date.m_Day, &date.m_Month, &date.m_Year);
	return date;
}
struct SEmployee ReadEmployee(){
	struct SEmployee employee;
	char firstName[50], secondName[50];
	fflush(stdin);fflush(stdout);
	printf("Enter employee first name:");
	fflush(stdin);fflush(stdout);
	scanf("%s", &firstName);

	printf("Enter employee second name:");
	fflush(stdin);fflush(stdout);
	scanf("%s", &secondName);

	strcpy(employee.m_Name, firstName);
	strcat(employee.m_Name," ");
	strcat(employee.m_Name, secondName);

	employee.m_BirthDate=ReadDate("Employee birth day");
	employee.m_GraduationDate=ReadDate("Employee graduation day");

	fflush(stdin);fflush(stdout);
	printf("Enter employee salary:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &employee.m_Salary);
	fflush(stdin);fflush(stdout);

	return employee;
}
void PrintEmployee(struct SEmployee employee){
	printf("%s\t%d/%d/%d\t%d/%d/%d\t%d\r\n",
		  employee.m_Name, employee.m_BirthDate.m_Day,employee.m_BirthDate.m_Month,employee.m_BirthDate.m_Year,employee.m_GraduationDate.m_Day,employee.m_GraduationDate.m_Month,employee.m_GraduationDate.m_Year ,employee.m_Salary);

}

int main() {
  struct SEmployee X= ReadEmployee();
  PrintEmployee(X);
  return 0;
}
