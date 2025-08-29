#include <stdio.h>

char* name[] = { "박정석", "박재은", "임준혁", "이승빈", "박시혜" };
int kor[] = { 10, 20, 30, 40, 50 };
int eng[] = { 60, 70, 80, 90, 80 };
int math[] = { 70, 60, 50, 40, 30 };
char* title[] = { "번호", "이름", "국어", "영어", "수학" };

int main()
{
  for (int i = 0; i < 5; i++) printf("%s\t", title[i]);
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%2d\t%s\t%3d\t%3d\t%3d\n", i+1, name[i], kor[i], eng[i], math[i]);
  }
  
  return 0;
}
