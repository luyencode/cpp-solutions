/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int deQuyPhiTuyen(int n)
{
    if(n == 1)
        return 1;

    int tich = 1;
    for(int i = 1; i <= n; i++)
    {
        tich *= i;
    }
    return deQuyPhiTuyen(n - 1) + tich;
}

int khuDeQuy(int n)
{
    int i;
    long S, P;
    S = 0;
    P = 1;
    i = 1;
    while(i <= n)
    {
        P = P * i;
        S = S + P;
        i++;
    }
    return S;
}
// --------------------------------------------
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nDe quy phi tuyen = %d", deQuyPhiTuyen(n));
    printf("\nKhu de quy = %d", khuDeQuy(n));


    getch();
    return 0;
}