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

int TinhTongCacPhanTuTrenDuongCheoPhu(int a[][MAX], int n)
{
    int S = 0;     
    for (int i = 0; i < n; i++)
    {
        S += a[i][n - 1 - i];
    }
    return S; 
}
int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    
    int tong = TinhTongCacPhanTuTrenDuongCheoPhu(a, n);
    printf("\nTong cac phan tu tren duong cheo phu = %d", tong);

    getch();
    return 0;
}