/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S, P;
    S = 0;
    P = 1;
    i = 1;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);

    while(i <= n)
    {
        P = P * i;
        S = S + P;
        i++;
    }
    printf("\nTong la %d",S);

    getch();
    return 0;
}