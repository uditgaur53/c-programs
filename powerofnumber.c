#include <stdio.h>
int main()
{
    int base, exponent, result = 1, i = 1;
    
    printf("Enter the Base & Exponent values:\n");
    scanf("%d%d", &base, &exponent);

    while(i <= exponent) {
        result *= base;
        i++;
    }
    
    printf("\nResult: %d^%d = %d\n", base, exponent, result);
    
    return 0;
}