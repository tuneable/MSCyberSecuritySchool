#include <stdio.h>

int main(void)
{
// 정수 변수 선언
	int age, score;	
	
//	scanf("나이가 어떻게 되세요? %d", age);
	printf("나이가 어떻게 되세요? ");
	scanf("%d\n", &age);
	printf("점수는요? ");
	scanf("%d\n", &score);
	
	
	printf("My age: %d\n%d is my point.\nGood\nMorning,\nEverybody!", age, score);
	
	return 0;
}