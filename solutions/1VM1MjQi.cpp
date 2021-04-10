/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

/*
Tính S(x, n) = x^n
Ta cần biết
+ Với n > 0 (ví dụ là 3) thì x^3 là x * x * x
+ Với n < 0 (ví dụ là -3) thì x^-3 là: 1/(x^3) = 1/x * 1/x * 1/x

*/

#include<stdio.h>
#include<conio.h>


float deQuy(float x, int n) // đệ quy
{
    if(n == 0)
        return 1;
    if(n == -1)
        return 1.0/x;
    if(n < 0)
        return deQuy(x, n + 1) * 1.0 / x;
    else if(n == 0)
        return 1;
    return deQuy(x, n - 1) * x;
}

float deQuyDuoi(float x, int n, float y = 1)  // đệ quy đuôi
{
    if(n == 0)
        return y;
    if(n < 0)
        return deQuyDuoi(x, n + 1, y * 1.0 / x);
    else if(n == 0)
        return 1;
    return deQuyDuoi(x, n - 1, y * x);
}

float khuDeQuy(float x, int n) // khử đệ quy
{
    bool Check = true; 
    float tich = 1;

    if(n == 0)
        return tich;
    else if(n < 0)
    {
        Check = false;
        n *= -1; // biến thành dương lại
    }

    for(int i = 1; i <= n; i++)
    {
        tich *= x; 
    }
    if(Check == true)
        return tich;
    return 1.0/tich;
}
int main()
{
    float x = 2;
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    printf("\nKhu de quy(%f, %d) = %f", x, n, khuDeQuy(x, n));
    printf("\nDe quy(%f, %d) = %f", x, n, deQuy(x, n));
    printf("\nDe quy duoi(%f, %d) = %f", x, n, deQuyDuoi(x, n));

    
     
    getch();
    return 0;
}