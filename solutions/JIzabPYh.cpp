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

int KiemTraChinhPhuong(int n)
{
    return (sqrt((float)n) == (int)sqrt((float)n));
}
void LietKeViTriChinhPhuong(int a[], int n)
{
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraChinhPhuong(a[i]) == 1)
        {
            flag = 1;
            printf("%4d", i);
        }
    }
    if(flag == 0)
    {
        printf("\nKhong co so chinh phuong");
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    printf("\nVi tri cac so chinh phuong la: ");
    LietKeViTriChinhPhuong(a, n);

    getch();
    return 0;
}