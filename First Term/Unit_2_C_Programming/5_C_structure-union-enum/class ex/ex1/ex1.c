/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>

struct SEmployee{
	char m_Name[50];
	int m_BirthDateDay;
	int m_BirthDateMonth;
	int m_BirthDateYear;
	int m_Salary;
};

int main() {
  struct SEmployee X;

  strcpy(X.m_Name, "Ahmed Said");
  X.m_BirthDateYear= 1980;
  X.m_BirthDateMonth= 12;
  X.m_BirthDateDay= 22;
  X.m_Salary= 50;

  printf("X contains(%s, %d/%d/%d, %d)\r\n", X.m_Name, X.m_BirthDateDay, X.m_BirthDateMonth, X.m_BirthDateYear, X.m_Salary);

  return 0;
}
