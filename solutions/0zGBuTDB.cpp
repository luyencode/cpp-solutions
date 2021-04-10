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

void LietKeChanTrongDoanXY(int a[], int n, int x, int y)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && x <= a[i] && a[i] <= y)
        {
            printf("\n%4d", a[i]);
        }
    }
}
int main()
{
    int n;
    int a[MAX];
    int x, y;
    printf("\nNhap x: ");
    scanf("%d", &x);

    printf("\nNhap y: ");
    scanf("%d", &y);
    nhap(a, n);
    xuat(a, n);

    printf("\nCac so chan trong mang thuoc [%d, %d] la: ", x, y);
    LietKeChanTrongDoanXY(a, n, x, y);

    getch();
    return 0;
}