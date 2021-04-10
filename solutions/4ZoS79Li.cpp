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

float timx(float a[], int n)
{
    float x = a[0];
    for(int i = 1; i < n; i++)
    {
         x = (x > (fabs)(a[i])) ?  x  :  (fabs)(a[i]);
    }
     return x;
}
int main()
{
    int n;
    float a[MAX];
    float b[MAX];

    nhap(a, n);
    xuat(a, n);
    float x = timx(a, n);
    printf("\nGia tri %.3f thoa dieu kien doan [-%.3f, %.3f] chua tat ca cac gia tri trong mang", x, x, x);
    
    getch();
    return 0;
}