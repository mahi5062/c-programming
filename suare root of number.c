#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter any number");
	scanf("%d",&a);
	b=sqrt(a);
	if (b*b==a)
	{
		printf("the square roots is %d and %d",b,b);
	}
	else 
	{
		printf("the given number is not a perfect square=%d",a);
	}
}
