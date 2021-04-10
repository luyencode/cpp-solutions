/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long P;
    do
    {
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);
    i = 1;
    P = 1;
    printf("\nCac uoc so le cua so %d la: ",n);
    while(i <= n)
    {
        if(n % i == 0)
        {
            if(i % 2 == 1)
            {
            printf("%4d", i);
            P = P * i;
            }
        }
            i++;
    }
    printf("\nTich cac uoc so le cua %d la: %ld", n, P);

    getch();
    return 0;
}