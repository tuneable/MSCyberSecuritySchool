#include <stdio.h>
#include <string.h>

char* title[] = { "번호", "이름", "국어", "영어", "수학" };
char* name[] = { "박정석", "박재은", "임준혁", "이승빈", "박시혜" };
int kor[] = { 10, 20, 30, 40, 50 };
int eng[] = { 60, 70, 80, 90, 80 };
int math[] = { 70, 60, 50, 40, 30 };

void swap(int i, int j);  // swap 함수 prototype
/*
reportcard [<번호>]
    번호에 해당하는 학생의 이름과 국영수 성적을 화면에 출력
    <default> All
*/
int main(int n, char **s) // Command Line Interface
{
  int start = 0, end = 5;
  if (n > 1)  // "1"  "2"
  {
    if (strcmp(s[1], "--help") == 0) 
    {
    printf("reportcard [<번호>]\n");
    printf("학생의 이름과 성적을 화면에 출력합니다.");
    }
    start = s[1][0] - '0' - 1;  // 문자 '1' ==> 1
  }
  for (int i = start; i < start+1; i++) 
  {
    if (i == start)
    {
      for(int j = 0; j<5; j++) printf("%s\t", title[i]);
    }
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%2d\t%s\t%3d\t%3d\t%3d\n", i+1, name[i], kor[i], eng[i], math[i]);
  }
  
  return 0;
}


