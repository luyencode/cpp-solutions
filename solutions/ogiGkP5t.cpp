/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i, n;
    float x, T, S;
    i = 1;
    T = 1;
    S = 0;
    printf("\nNhap x: ");
    scanf("%f", &x);
    //x = -x;
    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        T = pow(x, (2 * i )) * pow(-1, (float)i);
        S = S + T;
        i++;
    }
    printf("\nTong la %f", S);

    getch();
    return 0;
}