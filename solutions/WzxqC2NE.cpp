/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int N, d;
    printf("\nNhap N: ");
    scanf("%d", &N);
    if(N < 2)
        printf("\nSo %d khong la so nguyen to", N);
    else
        if(N == 2)
            printf("\nSo %d la so nguyen to", N);
        else
            if(N % 2 == 0)
                printf("\nSo %d khong la so nguyen to", N);
            else
            {
                d = 3;
                while(d <= N)
                {
                    if(N % d == 0)
                        break;
                    d = d + 2;
                }
                if(d == N)
                    printf("\nSo %d la so nguyen to", N);
                else
                    printf("\nSo %d khong la so nguyen to", N);
            }
    getch();
    return 0;
}