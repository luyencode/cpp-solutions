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

void HoanVi(int &a, int &b)
{
    int tam = a;
    a = b;
    b = tam;
}

void DichPhai(int a[], int n, int k)
{
    while(k--)
    {
        int tam = a[n - 1];
        for(int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = tam;
    }
}
int main()
{
    int n, k;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    printf("\nNhap K: ");
    scanf("%d", &k);

    DichPhai(a, n, k);
    printf("\nDich phai mang %d phan tu: ", k);
    xuat(a, n);

    getch();
    return 0;
}