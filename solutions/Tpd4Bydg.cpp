/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float a, b;
    float x;
    printf("\nNhap a: ");
    scanf("%f", &a);
    printf("\nNhap b: ");
    scanf("%f", &b);

    if(a == 0)
    {
        if(b == 0)
            printf("\nPT co vo so nghiem");
        else
            printf("\nPT vo nghiem");
    }
    else
    {
        x = -b / a;
    printf("\nPT co 1 nghiem la %f", x);
    }
    getch();
    return 0;

}