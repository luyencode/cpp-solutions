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
    float S;
    do
    {
        printf("\nNhap n(n >= 1): ");
        scanf("%d", &n);

        if(n < 1)
        {
            printf("\nn phai >= 1. Xin nhap lai !");
        }
    }while(n < 1);

    S = sqrt((float)2);
    for(i = 2; i <= n; i++)
    {
        S = sqrt(2 + S);
    }
    printf("\nTong S = %f", S);

    getch();
    return 0;
}