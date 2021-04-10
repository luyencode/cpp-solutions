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

void TaoMangBSaoChoBiBangTongCacPhanTuLanCanAiTrongMangA(int a[], int n)
{
    int b[MAX], nb = 0;
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            b[nb] = a[i + 1];
        }
        else if(i == n - 1)
        {
            b[nb] = a[i - 1];
        }
        else
        {
            b[nb] = a[i - 1] + a[i + 1];
        }
        nb++;
    }
    xuat(b, nb);
}
int main()
{
    int n, m;
    int a[MAX];

    printf("\nNhap mang: ");
    nhap(a, n);
    xuat(a, n);

    printf("\nMang b sao cho b[i] bang tong cac phan tu lan can cua a[i] trong mang a: \n");
    TaoMangBSaoChoBiBangTongCacPhanTuLanCanAiTrongMangA(a, n);

    getch();
    return 0;
}