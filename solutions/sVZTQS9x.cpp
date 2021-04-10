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
    return deQuy(n - 1) + (float) n / (n + 1);
}

float deQuyDuoi(int n, float x = 0.5)  // đệ quy đuôi
{
    if(n == 1)
        return x;
    return deQuyDuoi(n - 1, x +  (float) n / (n + 1));
}

float khuDeQuy(int n) // khử đệ quy
{
    int i = 1;
    float S = 0;

    while(i <= n)
    {
        S = S + (float)i / (i + 1);
        i++;
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