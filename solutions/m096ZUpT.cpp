/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, n;
    float x, S, T;
    long M, N;
    printf("\nNhap x: ");
    scanf("%f", &x);
    do
    {
    printf("\nNhap n(n >= 1) : ");
    scanf("%d", &n);
      if(n < 1)
      {
          printf("\n N phai >= 1. Xin nhap lai !");
      }

    }while(n < 1);

    S = 1;
    N = 1;
    i = 1;

    while(i <= n)
    {
        T = pow(x, (2 * i + 1));
        M = i * 2 + 1;
        N = N * M * (M - 1);
        S = S + x + T/N;
        i++;
    }
    printf("\nTong la %f", S);
    getch();
    return 0;
}