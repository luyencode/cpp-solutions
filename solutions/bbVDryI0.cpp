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
    i = 1;
    while(i <= n)
    {
        if(n % i == 0)
            printf("%4d", i);
        i = i + 1;
    }

    getch();
    return 0;
}