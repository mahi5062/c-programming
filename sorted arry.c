#include<stdio.h>
int main()
{
    int a[50],n,i,j,swap;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter %d integer\n",n);
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    {
        for (j=0;j<n-1;j++)
        {
        if (a[j]>a[j+1])    
        {
        swap=a[j];
        a[j]=a[j+1];
        a[j+1]=swap;
    }
        }
    }
    printf("sorted list in ascending order:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
