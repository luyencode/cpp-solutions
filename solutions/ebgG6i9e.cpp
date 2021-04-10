/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float S;
    i = 0;
    S = 1;

    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
      S = 1 + 1.0/S;
      i++;
    }
    printf("\nTong la %f", S);
    getch();
    return 0;
}