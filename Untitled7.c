#include <stdio.h>
#include <conio.h>

int rectangle(int a, int b);
double triangle(double a, double b);


int main()
{
    int x, y;

    printf("(x, y)"); scanf("%d %d", &x, &y);

    int r = rectangle(x, y);
    double t = triangle((double)x, (double)y);

    printf("밑변이 %d 이고, 높이가  %d 인 사각형의 면적은 %d 이고,\n삼각형의 면적은 %f 입니다.", x, y, r, t);
    return 0;
}

int rectangle(int a, int b)
{
    int xy = a * b;
    return xy;
}

double triangle(double a, double b)
{
    double xy = (double)a * (double)b / 2.0;
    return xy;
}