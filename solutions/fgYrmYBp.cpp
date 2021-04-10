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

    
        if(n <= 1 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 1 || n > MAX);

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

int TinhTongCacPhanTuChanNamTrenBien(int a[][MAX], int n)
{
    int S = 0;
    // Duyệt 2 cột biên
    for(int i = 0; i < n; i++)
    {
        if(a[0][i] % 2 == 0)
        {
            S += a[0][i];
        }
        if(a[n - 1][i] % 2 == 0)
        {
            S += a[n - 1][i];
        }
    }
    // Duyệt 2 dòng biên bỏ qua các phần tử thuộc 2 cột đã duyệt
    for(int i = 1; i < n - 1; i++)
    {
        if(a[i][0] % 2 == 0)
        {
            S += a[i][0];
        }
        if(a[i][n - 1] % 2 == 0)
        {
            S += a[i][n - 1];
        }
    }
    return S;
}
int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    
    int tong = TinhTongCacPhanTuChanNamTrenBien(a, n);
    printf("\nTong cac phan tu chan nam tren bien = %d", tong);

    getch();
    return 0;
}