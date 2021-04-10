/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int deQuy(int n)
{
    if(n == 0)
        return 0;
    return deQuy(n / 10) + 1;
}

int deQuyDuoi(int n, int x = 0)
{
    if(n == 0)
        return x;
    return deQuyDuoi(n / 10, x + 1);
}

int khuDeQuy(int n)
{
    int sochuso = 0;

    if(n == 0)
        sochuso = 0;
    else
    {
        do
        {
            sochuso++;
        }while(n /= 10);
    }
    return sochuso;

    //int sochuso = n == 0 ? 1 : (int)log10((float)n) + 1;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nDe quy %d co %d chu so", n, deQuy(n));
    printf("\nDe quy duoi %d co %d chu so", n, deQuyDuoi(n));
    printf("\nKhu de quy %d co %d chu so", n, khuDeQuy(n));

    getch();
    return 0;
}