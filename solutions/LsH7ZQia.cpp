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
    i = 1;
    S = pow(1.0, 1.0/2);
    while(i <= n)
    {
        S = pow((i + S) * 1.0, 1.0/(i + 1));
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}