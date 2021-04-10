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

/*
1234
1234 / 10 = 123 -> bỏ đi hàng đơn vị
123 % 10 = 3  -> lấy chữ số hàng chục
*/
int TimSoHangChuc5(int n)
{
    n = abs(n);
    n = n / 10;
    int hangchuc = n % 10;
    if(hangchuc == 5)
    {
        return 1;
    }
    return 0;
}

int TinhTongSoHangChuc5(int a[], int n)
{
    int Tong = 0;
    for(int i = 0; i < n; i++)
    {
        if(TimSoHangChuc5(a[i]) == 1)
        {
            Tong += a[i];
        }
    }
    return Tong;
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int TongChuc5 = TinhTongSoHangChuc5(a, n);
    printf("\nTong cac phan tu co chu so hang chuc la 5: %d", TongChuc5);

    getch();
    return 0;
}