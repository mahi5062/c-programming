#include<stdio.h>

int main()
{
  	int Number, i;
  	printf("\n Please Enter any Integer Value  : ");
  	scanf("%d", &Number);
  	printf("\n List of Natural Numbers from01 to %d are \n", Number);  	
	for(i = 0; i <= Number; i++)
  	{
    	printf(" %d \n", i);
  	}
  
  	return 0;
}
