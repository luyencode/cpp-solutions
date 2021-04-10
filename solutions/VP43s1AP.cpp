/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    if(n < 2)
        printf("\nSo %d khong phai la so nguyen to", n);
    else if(n == 2)
        printf("\nSo %d la so nguyen to", n);
    else if(n % 2 == 0)
        printf("\nSo %d khong phai la so nguyen to", n);
    else
    {
        for(i = 3; i <= n; i+=2)
        {
            if(n % i == 0)
                break;
        }
        if(i == n)
            printf("\nSo %d la so nguyen to", n);
        else
            printf("\nSo %d khong phai la so nguyen to", n);
    }
        


    getch();
    return 0;
}