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
    S = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("Error: (n >= 0)\n"));
    while(S + i < n)
    {
        i++;         //
        S = S + i;  // tương đương 1 dòng S += ++i;
    }
        printf("\nGia tri k lon nhat de S(k) = 1 + 2 + ... + k < n la %d", i);
    getch();
    return 0;
}