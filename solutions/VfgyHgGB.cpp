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

int KiemTraHoanThien(int n)
{
    int tong = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            tong += i;
        }
    }
    if(tong == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int KiemTraMangKhongCoSoHoanThienLonHon256(int a[], int n)
{
    int flag = 0; // lúc đầu chưa có
    for(int i = 0; i < n; i++)
    {
        if(KiemTraHoanThien(a[i]) == 1 && a[i] < 256)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int flag = KiemTraMangKhongCoSoHoanThienLonHon256(a, n);
    if(flag == 1)
    {
        printf("\nMang khong co so hoan thien lon hon 256");
    }
    else
    {
    printf("\nKhong tim thay");
    }
    
    

    getch();
    return 0;
}