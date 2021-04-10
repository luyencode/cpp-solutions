/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
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

int kiemtra(int a[], int n)
{
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] < 2004)
        {
            flag = 1;
        }
    }
    return flag;
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int flag = kiemtra(a, n);
    if(flag == 1)
    {
        printf("\nTim thay !");
    }
    else
    {
        printf("\nKhong tim thay con me gi");
    }

    getch();
    return 0;
}