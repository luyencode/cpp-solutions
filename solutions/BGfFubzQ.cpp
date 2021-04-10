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
    float S, M;
    do
    {
        printf("\nNhap n(n >= 1): ");
        scanf("%d", &n);

        if(n < 1)
        {
            printf("\nn phai >= 1. Xin nhap lai !");
        }
    }while(n < 1);
    i = 1;
    S = 0;
    M = 1;
    while(i <= n)
    {
        M = M * i;
        S = pow((M + S) * 1.0, 1.0/(i + 1));
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}