/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float a, b, c;
    printf("\nNhap a: ");
    scanf("%f", &a);

    printf("\nNhap b: ");
    scanf("%f", &b);

    printf("\nNhap c: ");
    scanf("%f", &c);
 
    if(a < 0)
     a = -a;
    if(b < 0)
     b = -b;
    if(c < 0)
     c = -c;

     printf("\na = %f", a);
     printf("\nb = %f", b);
     printf("\nc = %f", c);

    getch();
    return 0;
}