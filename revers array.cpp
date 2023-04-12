#include <stdio.h>
int main()
{
    int array[100], n, c, t, m;
    printf("enter size of array ");
    scanf("%d", &n);
    m = n - 1;
    printf("enter the array integers");
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }
    
    for (c = 0; c < n/2; c++) {
        t = array[c];
        array[c] = array[m];
        array[m] = t;    
        m--;
    }
    
    printf("Reversed array elements are:\n");
    
    for (c = 0; c < n; c++) {
        printf("%d\n", array[c]);
    }
    
    return 0;
}
