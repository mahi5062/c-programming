#include<stdio.h>
int main()
{
	char operation;
	double n1,n2;
	printf("enter any operation(+,-,*,/)");
	scanf("%c",&operation);
	printf("enter any two operatos");
		scanf("%lf%lf",&n1,&n2);
	switch(operation)
	{
		case'+':
		printf("%1lf+%If=%1lf",n1,n2,n1+n2);
		break;
		
		case'-':
		printf("%1lf-%1If=%1lf",n1,n2,n1-n2);
		break;
		
		case'*':
		printf("%1lf*%1If=%1lf",n1,n2,n1*n2);
		break;
		
		case'/':
		printf("%1lf/%1If=%1lf",n1,n2,n1/n2);
		break;
	default:
	printf("error! opertor is not correct");
    }
}
