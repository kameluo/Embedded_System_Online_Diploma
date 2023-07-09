/*
 * main.c
 *
 *  Created on: Jul 8, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
int checkPrime(int num1);

int main(){
	int num1, num2,i ,flag;

	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num1);
	scanf("%d", &num2);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between %d and %d are: ", num1, num2);
	for(i=num1+1; i<num2; ++i){
		flag=checkPrime(i);
		if(flag==0){
		printf("%d ",i);
		}
	}
}
int checkPrime(int num1){
	int count, flag=0;
	for(count=2; count<=num1/2; ++count){
				if(num1%count ==0){
					flag=1;
					break;
				}
			}
	return flag;
	}




/*int checkNumber(int x);
	int primeNum=0;
void main(void){
	int num1,num2;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&num1);
	scanf("%i",&num2);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between %d and %d are: ", num1, num2);
	int i;
	for(i=num1 ;i<=num2; i++){
		if(checkNumber(num1)==1){
			printf("%d ", num1);
		}
	}
	return;
}
int checkNumber(int x){
	int counter;
	for(counter=2; counter<x; counter++){
		if(x%counter == 0){
			primeNum=x;
		}else{
			primeNum=0;
		}
	}
	return (primeNum!=0) ? 1 : 0;
}*/



