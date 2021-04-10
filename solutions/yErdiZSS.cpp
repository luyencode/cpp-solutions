/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int i, n;
    int max, dem;
    max = 0;
    dem = 1;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    if(n == 0)
        dem = 1;

    do
    {
        i = n % 10;
       if(i == max)
           dem++;
       if(i > max)
           max = i;
    }while(n /= 10);
    printf("\nSo lon nhat la %d", max);
    printf("\nSo luong chu so lon nhat la %d", dem);

    getch();
    return 0;
}