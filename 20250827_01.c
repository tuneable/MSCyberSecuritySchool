#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int* p = arr;

    int i;

    printf("int arr[] = {");

    for (int i = 0; i < 9; i++)
    {
        printf("%d", arr[i]);
        if (i < 8) printf(", ");
        
    }
    printf("}");
    return i;
}