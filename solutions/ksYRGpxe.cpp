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
    float x, T, S;
    i = 1;
    T = 1;
    S = 0;
    do
    {
    printf("\nNhap x(x >= 0): ");
    scanf("%f", &x);
      if(x < 0)
      {
          printf("\nx khong hop le. Xin nhap lai !");
      }
    }while(x < 0);
    do
    {
    printf("\nNhap n(n >= 1): ");
    scanf("%d", &n);
    if(n < 1)
      {
          printf("\nn khong hop le. Xin nhap lai !");
      }
    }while(n < 1);
    while(i <= n)
    {
        T = T * x;
        S = sqrt(T + S);
        i++;
    }
    printf("\nTong la %f", S);


    getch();
    return 0;
}