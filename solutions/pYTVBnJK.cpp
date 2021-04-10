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

int timvitrithoaDK(int a[], int n)
{
    int i = 1;
    for(; i < n - 1; i++)
    {
        if(a[i] == a[i - 1] * a[i + 1])
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
    int x, y;

    nhap(a, n);
    xuat(a, n);

    int vitri = timvitrithoaDK(a, n);
    printf("\nVi tri thoa dieu kien: co gia tri lan can\n va gia tri tai do = tich 2 gia tri lan can: %d", vitri);

    getch();
    return 0;
}