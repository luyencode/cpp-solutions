/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMaTran(float a[][MAX], int &n)
{
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n < 1 || n > MAX);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("\nNhap vao a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void XuatMaTran(float a[][MAX], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%8.3f",a[i][j]);
        }
        printf("\n\n");
    }
}

void HoanVi(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void SapXep(float a[][MAX], int n)
{
    for(int i = 0; i <= n * n - 2; i++)
    {
        for(int j = i + 1; j <= n * n - 1; j++)
        {
            if(a[i / n][i % n] > a[j / n][j % n])
            {
                HoanVi(a[i / n][i % n], a[j / n][j % n]);
            }
        }
    }
}
int main()
{
    float a[MAX][MAX]; int n;
    NhapMaTran(a, n);
    XuatMaTran(a, n);
    SapXep(a, n);
    printf("\nMa tran vuong sau khi sap xep: \n");
    XuatMaTran(a, n);

    getch();
    return 0;
}