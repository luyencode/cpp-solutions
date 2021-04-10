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

int TimGiaTriLonNhatMaTranTamGiacTrenDuongCheoChinh(int a[][MAX], int n)
{
    int Max = a[0][n - 1];
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            Max = (a[i][j] > Max) ? a[i][j] : Max;
        }
    }
    return Max;
}

int TimGiaTriLonNhatMaTranTamGiacTrenDuongCheoPhu(int a[][MAX], int n)
{
    int Max = a[0][0];
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            Max = (a[i][j] > Max) ? a[i][j] : Max;
        }
    }
    return Max;
}
int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    int Max = TimGiaTriLonNhatMaTranTamGiacTrenDuongCheoChinh(a, n);
    printf("\nGia tri lon nhat ma tran tam giac tren duong cheo chinh = %d", Max);

    int Max2 = TimGiaTriLonNhatMaTranTamGiacTrenDuongCheoPhu(a, n);
    printf("\nGia tri lon nhat ma tran tam giac tren duong cheo phu = %d", Max2);

    getch();
    return 0;
}