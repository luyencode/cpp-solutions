/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int i, n;
    int max;
    max = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    if(n == 0)
        max = 0;

    do
    {
        i = n % 10;
       if(i > max)
       {
           max = i;
       }
    }while(n /= 10);

    printf("\nChu so lon nhat la %d", max);

    getch();
    return 0;
}