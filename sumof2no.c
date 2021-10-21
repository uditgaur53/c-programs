#include <stdio.h>
int main()
{
    int p, q, r;
    
    printf("Enter two integer values::\n\n");
    scanf("%d %d", &p, &q);
    r = p + q;      
    
    printf("Result:: %d + %d = %d\n", p, q, r);
    return 0;
}