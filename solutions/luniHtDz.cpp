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

int dautientrongdoan(int a[], int n, int x, int y)
{
    int dem = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] >= x && a[i] <= y)
        {
            dem++;
            break;
        }
    }
    if(dem == 0)
    {
        return x;
    }
    return a[i];
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

    int ketqua = dautientrongdoan(a, n, x, y);
    printf("\nGia tri dau tien nam trong doan [%d, %d] la %d", x, y, ketqua);
    getch();
    return 0;
}