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

bool kiemtrahoanthien(int n)
{
    int i = 1;
    int S = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
            S = S + i;
        }
        i++;
    }
    if(S == n)
        return true;
    else
        return false;
}

int timvitrihoanthiencuoi(int a[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        if(kiemtrahoanthien(a[i]) == true)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int vitrihoanthiencuoi = timvitrihoanthiencuoi(a, n);
    printf("\nVi tri hoan thien cuoi la %d", vitrihoanthiencuoi);

    getch();
    return 0;
}