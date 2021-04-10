/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int S = 0;
    int n = 0;
    while(S < 10000)
    {
        n++;
        S = S + n;
    }
    printf("\nTong la %d", S);
    printf("\nSo n la %d", n);
    getch();
    return 0;
}