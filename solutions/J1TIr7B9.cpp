/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


float deQuy(int n) // đệ quy
{
    if(n == 1)
        return 0.5;
    return deQuy(n - 1) + 1.0 / (2 * n);
}

float deQuyDuoi(int n, float x = 0.5)  // đệ quy đuôi
{
    if(n == 1)
        return x;
    return deQuyDuoi(n - 1, x +  1.0 / (2 * n));
}

float khuDeQuy(int n) // khử đệ quy
{
    float S = 0;

    for(int i = 1; i <= n; i++)
    {
        S = S + 1.0 / (2 * i);
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