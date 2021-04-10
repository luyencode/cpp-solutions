/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
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

void timdoan(float a[], int n)
{
    float max = a[0];
    float min = a[0];
    for(int i = 0; i < n; i++)
    {
        max = (a[i] > max) ? a[i] : max;
        min = (a[i] < min) ? a[i] : min;
    }
     printf("\n[ %.3f , %.3f ] la doan chua cac gia tri trong mang\n", min, max);
}
int main()
{
    int n;
    float a[MAX];
    float b[MAX];

    nhap(a, n);
    xuat(a, n);
    timdoan(a, n);
    

    getch();
    return 0;
}