/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float a, b;
    printf("\nNhap a: ");
    scanf("%f", &a);
    printf("\nNhap b: ");
    scanf("%f", &b);

    if(a * b > 0)
        printf("\n%10.3f va %10.3f cung dau", a, b);
    else
        printf("\n%10.3f va %10.3f khong cung dau", a, b);
    getch();
    return 0;
}