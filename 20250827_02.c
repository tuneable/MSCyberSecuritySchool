#include <stdio.h>
#include <string.h>

    char* str = "Good Afternoon!";

int main()
{
    char b[100];
    strcpy(b, str);
    char* p = b;
    printf("Before: \"%s\"\n", p);

    *(p+5) = '_';
    printf("After: \"%s\"", p);    
    

}