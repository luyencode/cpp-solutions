/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

int KiemTraMangANamTrongMangB(int a[], int b[], int n, int m)
{
    int flag = 0;
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                dem++;
            }
        }
    }
    if(dem == n)
    {
        flag = 1;    
    }
    return flag;
}
int main()
{
    int n, m;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int b[MAX];
    nhap(b, m);
    xuat(b, m);

    int flag = KiemTraMangANamTrongMangB(a, b, n, m);
    if(flag == 1)
    {
        printf("\nTat ca cac phan tu trong mang A deu nam trong mang B");
    }
    else
    {
    printf("\nKhong thoa DK");
    }
    
    

    getch();
    return 0;
}