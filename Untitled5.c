#include <stdio.h>


int main()
{
    int v1, v2;
    char k;
    printf("value 1? ");    scanf(" %d", &v1);
    printf("value 2? ");    scanf(" %d", &v2);
    printf("operation? ");  scanf(" %c", &k);

    for(;;)
    {
        if (k == '+')
        {
            printf("%d %c %d = %d\n", v1, k, v2, v1+v2);    // v1 + v2 = x
        } else if (k =='-')
        {
            printf("%d %c %d = %d\n", v1, k, v2, v1-v2);    // v1 - v2 = x
        } else if (k == '*')
        {
            printf("%d %c %d = %d\n", v1, k, v2, v1*v2);    // v1 * v2 = x
        } else if (k == '/')
        {
            printf("%d %c %d = %f\n", v1, k, v2, (double)v1/v2);    // v1 / v2 = x
        } else break;
    }
    
    

    return 0;
}