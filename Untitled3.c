#include <stdio.h>
int main()
{
    int sval, eval;
    int rval = 0;
    printf("시작값을 입력하세요. ");    scanf("%d", &sval);
    printf("종료값을 입력하세요. ");    scanf("%d", &eval);

    int index = sval;

    while (index <= eval)   // 수행조건식
    {
        rval += index;
        index++;
    }
    printf("시작값부터 종료값까지 누적 합은 %d 입니다.", rval);
    
    return 0;
}