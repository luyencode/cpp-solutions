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

int KiemTraDang3K(int n)
{
    int flag=1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;

    while(n > 1)
    {
        int du = n % 3;
        if(du != 0)  // nếu dư mà khác 0. lập tức báo sai
            flag = 0;
        n /= 3;
    }
    if(flag == 1)
      return 1;
    else
      return 0;
}

void LietKeCacGiaTriCoDang3K(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(KiemTraDang3K(a[i]) == 1)
        {
            printf("%4d", a[i]);
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    printf("\nCac gia tri co dang 3^k trong mang la: ");
    LietKeCacGiaTriCoDang3K(a, n);

    getch();
    return 0;
}