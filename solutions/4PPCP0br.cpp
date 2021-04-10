/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S, T;
    i = 1;
    S = 0;
    T = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
      if(n < 1)
       {
        printf("\nN phai >= 1. Xin Nhap lai!");
       }
    }while(n < 1);

    while(i <= n)
    {
        T = T + i;
        S = S + 1.0 / T;
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}