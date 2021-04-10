/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    int count;
    do
    {
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);
    i = 1;
    count = 0;
    while(i <= n)
    {
        if(n % i == 0)
        {
           printf("%4d", i);
           count++;
        }
            i++;
    }
    printf("\nSo luong cac uoc so cua %d la: %d", n , count);
    getch();
    return 0;
}