/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#define MAX 100

void nhap (float a[], int &n)
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
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

float duongcuoicung(float a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
         if (a[i] > 0)
         {
             return a[i];
         }
    }
    return -1;
}
int main()
{
    int n;
    float a[MAX];
    nhap(a, n);
    xuat(a, n);

    float duongcuoi = duongcuoicung(a, n);
    printf("\nGia tri duong cuoi cung la %.3f", duongcuoi);

    getch();
    return 0;
}