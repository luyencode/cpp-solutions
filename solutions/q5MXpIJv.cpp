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

int KiemTraCapSoCong(int a[], int n, int &d)
{
    d = a[1] - a[0];
    int flag = 1;
    for(int i = 2; i < n - 1; i++)
    {
        if((a[i + 1] - a[i]) != d)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n, d;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int flag = KiemTraCapSoCong(a, n, d);
    if(flag == 1)
    {
        printf("\nCac phan tu trong mang lap thanh cap so cong voi cong sai d = %d", d);
    }
    else
    {
    printf("\nKhong thoa DK");
    }
    
    

    getch();
    return 0;
}