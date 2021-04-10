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
int TinhTongCacPhanTuTamGiacDuoiDuongCheoChinh(int a[][MAX], int n)
{
    /*for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("%4d",a[i][j]);
        }
    }*/
    int tong = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            tong += a[i][j];
        }
    }
    return tong;
}

int TinhTongCacPhanTuTamGiacDuoiDuongCheoPhu(int a[][MAX], int n)
{
    int tong = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = n - i; j < n; j++)
        {
            tong += a[i][j];
        }
    }
    return tong;
}
int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    int tong = TinhTongCacPhanTuTamGiacDuoiDuongCheoChinh(a, n);
    printf("\nTong cac phan tu tam giac duoi duong cheo chinh = %d", tong);

    int tong2 = TinhTongCacPhanTuTamGiacDuoiDuongCheoPhu(a, n);
    printf("\nTong cac phan tu tam giac duoi duong cheo phu = %d", tong2);

    getch();
    return 0;
}