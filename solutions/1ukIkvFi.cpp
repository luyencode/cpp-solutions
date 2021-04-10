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

int kiemtrahoanthien(int n)
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
        return 1;
    else
        return 0;
}
int timvitrisohoanthiendau(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(kiemtrahoanthien(a[i]) == 1)
        {
            return i;
        }
    }
    return -1;
}

int TimHoanThienBeNhat(int a[], int n, int ViTriHoanThienDau)
{

    int HoanThienMin = a[ViTriHoanThienDau];

    for (int i = ViTriHoanThienDau + 1; i < n; i++)
    {
        if (kiemtrahoanthien(a[i]) == 1 && a[i] < HoanThienMin)
        {
            HoanThienMin = a[i];
        }
    }
    return HoanThienMin;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);



    int vitrihoanthiendau = timvitrisohoanthiendau(a, n);
    
    
    if(vitrihoanthiendau == -1)
    {
        printf("\nmang khong co so hoan thien");
    }
    else
    {
        printf("\nVi tri hoan thien dau la %d", vitrihoanthiendau);
        int hoanthienmin = TimHoanThienBeNhat(a, n, vitrihoanthiendau);
        printf("\nso hoan thien be nhat la %d", hoanthienmin);
    }

    getch();
    return 0;
}