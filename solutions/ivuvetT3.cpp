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

float TinhTongCacSoAm(float a[][MAX], int n)
{
    float tongAm = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] < 0)
            {
                tongAm += a[i][j];
            }
        }
    }
    return tongAm;
}
int main()
{
    float a[MAX][MAX]; int n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    float tongAm = TinhTongCacSoAm(a, n);
    printf("\nTong cac so am trong ma tran vuong = %.3f", tongAm);

    getch();
    return 0;
}