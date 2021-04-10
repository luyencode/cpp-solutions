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

int KiemTraMaTranCoPhaiLaMaPhuong(int a[][MAX], int n)
{
    int i, j, temp, s1, s2;
    // Tổng các phần tử trên đường chéo phụ và đường chéo chính
    for(s1 = s2 = i = 0; i < n; i++)
    {
        s1 += a[i][i];
        s2 += a[i][n - i - 1];
    }
    if(s1 != s2) 
    {
        return 0;
    }
    temp = s1;
    // tổng các phần tử trên các dòng và các cột
    for(i = 0; i < n; i++)
    {
        for(s1 = s2 = j = 0; j < n; j++)
        {
            s1 += a[i][j];
            s2 += a[j][i];
        }
    }
    if(s1 != temp || s2 != temp)
    {
        return 0;
    }
}

int main()
{
    int a[MAX][MAX],i, j, n, sDong, sCot;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    for(i = 0; i < n; i++)
    {
        for(sDong = sCot = j = 0; j < n; j++)
        {
            sDong += a[i][j];
            sCot += a[j][i];
        }
        printf("Tong hang %d: %4d", i, sDong);
        printf("\tTong cot %d: %4d\n", i, sCot);
    }

    if(KiemTraMaTranCoPhaiLaMaPhuong(a, n))
    {
        printf("\nMa phuong");
    }
    else printf("\nKhong phai ma phuong");
    getch();
    return 0;
}