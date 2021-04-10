/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    S = 0;
    i = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);

    while(i < n)
    {
        S = S + (float)(2 * i + 1) / (2 * i + 2);
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}