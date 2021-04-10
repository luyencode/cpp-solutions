/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMaTran(int a[][MAX], int &n)
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
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMaTran(int a[][MAX], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n\n");
    }
}

int KiemTraNguyenTo(int n)
{
    if(n < 2)
    {
        return 0;
    }
    else if(n > 2)
    {
        if(n % 2 == 0)
        {
            return 0;
        }
        for(int i = 3; i <= sqrt((float)n); i++)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int TimSoNguyenToDauTien(int a[][MAX], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(KiemTraNguyenTo(a[i][j]) == 1)
            {
                return a[i][j];
            }
        }
    }
    return 0;
}

int TimSoNguyenToLonNhat(int a[][MAX], int n)
{
    int SoNguyenToMax = TimSoNguyenToDauTien(a, n);
    if(SoNguyenToMax == 0)
    {
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(KiemTraNguyenTo(a[i][j]) == 1)
            {
                SoNguyenToMax = (a[i][j] > SoNguyenToMax) ? a[i][j] : SoNguyenToMax;
            }
        }
    }
    return SoNguyenToMax;
}
int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    int SoNguyenToMax = TimSoNguyenToLonNhat(a, n);
    printf("\nSo nguyen to lon nhat trong ma tran = %d", SoNguyenToMax);
    getch();
    return 0;
}