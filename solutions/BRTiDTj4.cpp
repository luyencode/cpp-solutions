/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>


float deQuy(int n) // đệ quy
{
    if(n == 1)
        return 1;
    return deQuy(n - 1) * n;
}

float deQuyDuoi(int n, float x = 1)  // đệ quy đuôi
{
    if(n == 1)
        return x;
    return deQuyDuoi(n - 1, x * n);
}

float khuDeQuy(int n) // khử đệ quy
{
    int i = 1;
    float P = 1;

    while(i <= n)
    {
        P = P * i;
        i++;
    }
    return P;
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