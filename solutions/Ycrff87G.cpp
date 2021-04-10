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
float timduongdautien(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
         if (a[i] > 0)
         {
             return a[i];
         }
    }
    return -1;
}
float timgiatriduongnhonhat(float a[], int n)
{
    float duongnhonhat = timduongdautien(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] < duongnhonhat)
        {
            duongnhonhat = a[i];
        }
    }
    return duongnhonhat;
}

void LietKeViTriBgGiaTriDuongMin(float a[], int n)
{
    float DuongMin = timgiatriduongnhonhat(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == DuongMin)
        {
            printf("%4d", i);
        }
    }
}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);

    int vitriduongdau = timduongdautien(a, n);
    if(vitriduongdau == -1)
    {
        printf("\nMang khong co so duong");
    }
    else
    {
    printf("\nVi tri ma gia tri tai do bang gia tri duong nho nhat: ");
    LietKeViTriBgGiaTriDuongMin(a, n);
    }
    getch();
    return 0;
}