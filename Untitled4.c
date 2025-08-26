#include <stdio.h>

int main()
{
    int index = 1, eval = 0, val = 0;

    printf("인덱스 시작값은? ");
    scanf("%d", &index);

    printf("인덱스 종료값은? ");
    scanf("%d", &eval);

    /*
    while (index < eval)
    {
        val += index;
        
        printf(" %-5d %3d\n", val, index);

        index += 2;
    }
    */

    for (;index < eval; index += 2)
    {
        val += index;
        printf(" %-5d %3d\n", val, index);
    }
    
    return 0;
}