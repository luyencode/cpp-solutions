/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float x, S, T;
    long M;
    printf("\nNhap x: ");
    scanf("%f", &x);
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
      if(n < 1)
      {
          printf("\n N phai >= 1. Xin nhap lai !");
      }

    }while(n < 1);

    S = 0;
    T = 1;
    M = 0;
    i = 1;

    while(i <= n)
    {
        T = T * x;
        M = M + i;
        S = S + T/M;
        i++;
    }
    printf("\nTong la %f", S);
    getch();
    return 0;
}