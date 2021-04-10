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


void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Dong(int a[][MAX], int n, int dong1, int dong2)
{
    if((dong1 >= 0 && dong1 < n) && (dong2 >= 0 && dong2 < n))
    {
        for(int j = 0; j < n; j++)
        {
            HoanVi(a[dong1][j], a[dong2][j]);
        }
    }
}

int main()
{
    int a[MAX][MAX], n, dong1, dong2;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    do
    {
        printf("\nNhap dong 1: ");
        scanf("%d", &dong1);

        if(dong1 < 0 || dong1 >= n)
        {
            printf("\nDong khong hop le. Xin Nhap lai!");
        }
    }while(dong1 < 0 || dong1 >= n);

    do
    {
        printf("\nNhap dong 2: ");
        scanf("%d", &dong2);

        if(dong2 < 0 || dong2 >= n)
        {
            printf("\nDong khong hop le. Xin Nhap lai!");
        }
    }while(dong2 < 0 || dong2 >= n);

    HoanVi2Dong(a, n, dong1, dong2);

    printf("\nMa tran sau khi hoan vi dong %d va dong %d \n", dong1, dong2);
    XuatMaTran(a, n);

    getch();
    return 0;
}