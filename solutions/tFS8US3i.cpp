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

void LietKe(int a[], int n)
{
    int i, j;
    int khoangCachGanNhat = (abs)(a[0] - a[1]);
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n - 1; j++)
        {
            if((abs)(a[i] - a[j]) < khoangCachGanNhat)
            {
                khoangCachGanNhat = (abs)(a[i] - a[j]);
            }
        }
    }
    printf("\nNhung cap gia tri gan nhau nhat: \n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n - 1; j++)
        {
            if((abs)(a[i] - a[j]) == khoangCachGanNhat)
            {
                printf("\<%d, %d> vi tri <a[%d],a[%d]>\n", a[i], a[j], i, j);
            }
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKe(a, n);

    getch();
    return 0;
}