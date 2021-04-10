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

float TimGiaTriLonNhat(float a[][MAX], int n)
{
    float lonnhat = a[0][0];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            lonnhat = (a[i][j] > lonnhat) ? a[i][j] : lonnhat;
        }
    }
    return lonnhat;
}
int main()
{
    float a[MAX][MAX]; int n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    float lonnhat = TimGiaTriLonNhat(a, n);
    printf("\nGia tri lon nhat trong ma tran vuong = %.3f", lonnhat);

    getch();
    return 0;
}