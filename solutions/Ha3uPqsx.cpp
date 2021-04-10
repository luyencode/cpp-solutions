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

int DemSoLuongCacGiaTriPhanBiet(int a[], int n)
{
    int dem = 0, flag;
    for(int i = 0; i < n; i++)
    {
        flag = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int dem = DemSoLuongCacGiaTriPhanBiet(a, n);
    printf("\nSo luong cac gia tri phan biet trong mang = %d", dem);

    getch();
    return 0;
}