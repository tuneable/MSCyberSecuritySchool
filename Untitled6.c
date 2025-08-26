#include <stdio.h>

int main()
{
    char num;

    printf("숫자를 입력하세요. ");
    scanf(" %c", &num);
/*
    if (num == '1')
    {
        printf("One");
        
    } else if (num == '2')
    {
        printf("Two");
        
    } else if (num == '3')
    {
        printf("Three");
        
    } else if (num == '4')
    {
        printf("Four");
        
    } else if (num == '5')
    {
        printf("Five");
        
    } else if (num == '6')
    {
        printf("Six");
        
    } else if (num == '7')
    {
        printf("Seven");
        
    } else if (num == '8')
    {
        printf("Eight");
        
    } else if (num == '9')
    {
        printf("Nine");
        
    } else if (num == '0')
    {
        printf("Zero");
        
    } else
    {
        printf("장난하냐?");
    }
    */
    
    switch (num)
    {
    case '0': printf("Zero"); break;
    case '1': printf("One"); break;
    case '2': printf("Two"); break;
    case '3': printf("Three"); break;
    case '4': printf("Four"); break;
    case '5': printf("Five"); break;
    case '6': printf("Six"); break;
    case '7': printf("Seven"); break;
    case '8': printf("Eight"); break;
    case '9': printf("Nine"); break;
    default: printf("장난하냐?"); break;
    }
    


    return 0;
}