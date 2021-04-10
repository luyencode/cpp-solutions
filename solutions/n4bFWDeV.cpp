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

int KiemTraDongGiam(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] < a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int DemSoLuongDongGiam(int a[][MAX], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraDongGiam(a[i], n) == 1)
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    
    int dem = DemSoLuongDongGiam(a, n);
    printf("\nSo luong dong giam = %d", dem);
    getch();
    return 0;
}