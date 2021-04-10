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

int DemPhanTuLonNhatDungSau(int a[], int n)
{
    int dem = 0;
    for(int i = 1; i < n; i++)
    {
        int flag = 1;
        for(int j = 0; j < i; j++)
        {
            if(a[i] < a[j] || a[i] == a[j])
            {
                flag = 0;
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

    

    int dem = DemPhanTuLonNhatDungSau(a, n);
    printf("\nGia tri trong mang thoa: lon hon tat ca cac gia tri dang truoc no = %d", dem);
    
    

    getch();
    return 0;
}