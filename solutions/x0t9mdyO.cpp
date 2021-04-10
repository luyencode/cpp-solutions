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
        printf("\nNhap n(n >= 2): ");
        scanf("%d", &n);

        if(n < 2)
        {
            printf("\nn phai >= 2. Xin nhap lai !");
        }
    }while(n < 2);
    i = 3;
    S = pow(2.0, 1.0/2);
    while(i <= n)
    {
        S = pow((i + S) * 1.0, 1.0/i);
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}