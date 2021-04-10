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

void Them1PhanTu(int a[], int &n, int ViTriThem, int PhanTuThem)
{
    for(int i = n; i > ViTriThem; i--)
    {
        a[i] = a[i - 1];
    }
    a[ViTriThem] = PhanTuThem;
    n++;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int ViTriThem, PhanTuThem;

    // 0 <= ViTriThem <= n
    do
    {
        printf("\nNhap vao vi tri can them (%d --> %d) ", 0, n);
        scanf("%d", &ViTriThem);

        if (ViTriThem < 0 || ViTriThem > n)
        {
            printf("\nVi tri khong hop le. Xin kiem tra lai !");
        }
    } while (ViTriThem < 0 || ViTriThem > n);

    printf("\nNhap vao phan tu can them: ");
    scanf("%d", &PhanTuThem);

    Them1PhanTu(a, n, ViTriThem, PhanTuThem);
    printf("\nMang sau khi them:\n");
    xuat(a, n);

    getch();
    return 0;
}