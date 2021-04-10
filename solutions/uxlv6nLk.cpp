/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int N, m, S;
    printf("\nNhap N: ");
    scanf("%d", &N);

    S = 0;
    m = 0;
    do
    {
        m = m + 1;
        S = S + m;
    }while(S + m + 1 < N);
    printf("\nSo nguyen duong m la %d", m);
    getch();
    return 0;
}