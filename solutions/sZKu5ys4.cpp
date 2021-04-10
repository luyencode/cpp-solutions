/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int i, n;
    int min, dem;
    dem = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: n >= 0 !"));
    min = n % 10;  // khởi tạo min
    if(n == 0)
        min = 0;

    do
    {
        i = n % 10;
        if(i == min)
            dem++;
       if(i < min)
           min = i;
    }while(n /= 10);

    printf("\nChu so nho nhat la %d", min);
    printf("\nSo luong chu so nho nhat la %d", dem);

    getch();
    return 0;
}