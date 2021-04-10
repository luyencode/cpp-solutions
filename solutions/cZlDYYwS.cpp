/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S;
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
    S = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
           S = S + i;
        }
            i++;
    }
    if(S == n)
        printf("\n%d la so hoan thien", n);
    else
        printf("\nSo nhap vao khong la so hoan thien");
    getch();
    return 0;
}