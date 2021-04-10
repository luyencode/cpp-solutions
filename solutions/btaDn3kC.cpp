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

int DemPhanTuChiXuatHien1Trong2Mang(int a[], int b[], int na, int nb)
{
    int flag, dem = 0;
    for(int i = 0; i < na; i++)
    {
        flag = 1;
        for(int j = 0; j < nb; j++)
        {
            if(a[i] == b[j])
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
    for(int i = 0; i < nb; i++)
    {
        flag = 1;
        for(int j = 0; j < na; j++)
        {
            if(b[j] == a[i])
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
    int na, nb;
    int a[MAX], b[MAX];

    printf("\nNhap mang a:");
    nhap(a, na);
    xuat(a, na);

    printf("\nNhap mang b:");
    nhap(b, nb);
    xuat(b, nb);
    
    int dem = DemPhanTuChiXuatHien1Trong2Mang(a, b, na, nb);
    printf("\nSo phan tu chi xuat hien 1 trong 2 mang la: %d", dem);
    getch();
    return 0;
}