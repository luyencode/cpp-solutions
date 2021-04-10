/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


float deQuy(int n) // đệ quy
{
    if(n == 0)
        return 1;
    return deQuy(n - 1) + 1.0 / ((2 * n) + 1);
}

float deQuyDuoi(int n, float x = 1)  // đệ quy đuôi
{
    if(n == 0)
        return x;
    return deQuyDuoi(n - 1, x +  1.0 / ((2 * n) + 1));
}

float khuDeQuy(int n) // khử đệ quy
{
    float S = 1;

    for(int i = 1; i <= n; i++)
    {
        S = S + 1.0 / ((2 * i) + 1);
    }
    return S;
}
int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    
    printf("\nDe quy(%d) = %f", n, deQuy(n));
    printf("\nDe quy duoi(%d) = %f", n, deQuyDuoi(n));
    printf("\nKhu de quy(%d) = %f", n, khuDeQuy(n));

    
     
    getch();
    return 0;
}