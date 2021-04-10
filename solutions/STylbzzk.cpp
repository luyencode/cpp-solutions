/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int deQuyDuoi(int n, int Max = 0)
{
    if(n == 0)
        return Max;
    return deQuyDuoi(n / 10, Max > n % 10 ? Max: n % 10);
}

int khuDeQuy(int n)
{
    int Max = 0;
    do
    {
        int chuso = n % 10;
        if(chuso > Max)
            Max = chuso;
    }while(n /= 10);
    return Max;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nDe quy duoi %d chu so max = %d", n, deQuyDuoi(n));
    printf("\nKhu de quy %d chu so max = %d", n, deQuyDuoi(n));
    getch();
    return 0;
}