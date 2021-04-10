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

int TimChuSoDauChan(int n)
{
    int dv;
   while (n >= 10)   // vòng lặp kết thúc khi n < 10
   {
       dv = n % 10;
       n = n / 10;
   }
   if (n % 2 != 0)
       return 0;
   return 1;
}

int LietKeChuSoDauChan(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
       if (TimChuSoDauChan(a[i]) == 1)
       {
           printf("%4d", a[i]);
       }
    }
   return 0;
}

int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    printf("\nCac so co chu so dau chan la: ");
    LietKeChuSoDauChan(a, n);
    
    getch();
    return 0;
}