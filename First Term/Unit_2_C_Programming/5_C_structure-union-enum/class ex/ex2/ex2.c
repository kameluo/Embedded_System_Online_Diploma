/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */
/*
 * Copying structure variable contents to another variable
 * */
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
  struct SEmployee X, Y, Z;

  strcpy(X.m_Name, "Ahmed Said");
  X.m_BirthDateYear= 1980;
  X.m_BirthDateMonth= 12;
  X.m_BirthDateDay= 22;
  X.m_Salary= 50;

  printf("X contains(%s, %d/%d/%d, %d)\r\n", X.m_Name, X.m_BirthDateDay, X.m_BirthDateMonth, X.m_BirthDateYear, X.m_Salary);

  strcpy(Y.m_Name, X.m_Name);
  Y.m_BirthDateYear= X.m_BirthDateYear;
  Y.m_BirthDateMonth= X.m_BirthDateMonth;
  Y.m_BirthDateDay= X.m_BirthDateDay;
  Y.m_Salary= X.m_Salary;

  printf("Y contains(%s, %d/%d/%d, %d)\r\n", Y.m_Name, Y.m_BirthDateDay, Y.m_BirthDateMonth, Y.m_BirthDateYear, Y.m_Salary);

  Z=X;

  printf("Z contains(%s, %d/%d/%d, %d)\r\n", Z.m_Name, Z.m_BirthDateDay, Z.m_BirthDateMonth, Z.m_BirthDateYear, Z.m_Salary);


  return 0;
}
