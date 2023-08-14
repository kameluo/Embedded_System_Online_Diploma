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

enum NUMType{INT, FLOAT, DOUBLE};

union UNUMValue{
	int u_intValue;
	float u_floatValue;
	double u_doubleValue;
};

union UNUMValue Add(union UNUMValue value1,union UNUMValue value2, enum NUMType type){
	union UNUMValue result;
	switch (type){
	case INT: result.u_intValue=value1.u_intValue+value2.u_intValue;
		break;
	case FLOAT:
		result.u_floatValue=value1.u_floatValue+value2.u_floatValue;
		break;
	case DOUBLE:
		result.u_doubleValue=value1.u_doubleValue+value2.u_doubleValue;
		break;
	}
	return result;
}

void main(){
	union UNUMValue V1, V2, R;
	printf("the size of UNUMValue is %d bytes\n\n",sizeof(union UNUMValue));
	V1.u_intValue=9898;
	V2.u_intValue=8776;
	R=Add(V1,V2,INT);
	printf("int: %d + %d= %d\n",V1.u_intValue,V2.u_intValue,R.u_intValue);

	V1.u_floatValue=86.82;
	V2.u_floatValue=83.11;
	R=Add(V1,V2,FLOAT);
	printf("Float: %f + %f= %f\n",V1.u_floatValue,V2.u_floatValue,R.u_floatValue);

	V1.u_doubleValue=821.8;
	V2.u_doubleValue=988.2;
	R=Add(V1,V2,DOUBLE);
	printf("Double: %lf + %lf= %lf\n",V1.u_doubleValue,V2.u_doubleValue,R.u_doubleValue);


}
