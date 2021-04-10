/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    /*int S, i, n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    for(i = 1, S = 0; i < n; i+=2)
    {
        S = S + i;
    }
    printf("\nTong = %d", S);*/

    int S, i, n;
    S = 0;
    i = 1;
    printf("\nNhap n: ");
    scanf("%d", &n);
    for(;;)
    {
        S = S + i;
        i = i + 2;
        if(i >= n)
            break;
    }
    printf("\nTong = %d", S);
    getch();
    return 0;
}