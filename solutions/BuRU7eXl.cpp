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

void HoanVi2Cot(int a[][MAX], int n, int cot1, int cot2)
{
    if((cot1 >= 0 && cot1 < n) && (cot2 >= 0 && cot2 < n))
    {
        for(int i = 0; i < n; i++)
        {
            HoanVi(a[i][cot1], a[i][cot2]);
        }
    }
}

int main()
{
    int a[MAX][MAX], n, cot1, cot2;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    do
    {
        printf("\nNhap cot 1: ");
        scanf("%d", &cot1);

        if(cot1 < 0 || cot1 >= n)
        {
            printf("\nCot khong hop le. Xin Nhap lai!");
        }
    }while(cot1 < 0 || cot1 >= n);

    do
    {
        printf("\nNhap cot 2: ");
        scanf("%d", &cot2);

        if(cot2 < 0 || cot2 >= n)
        {
            printf("\nCot khong hop le. Xin Nhap lai!");
        }
    }while(cot2 < 0 || cot2 >= n);

    HoanVi2Cot(a, n, cot1, cot2);

    printf("\nMa tran sau khi hoan vi cot %d va cot %d \n", cot1, cot2);
    XuatMaTran(a, n);

    getch();
    return 0;
}