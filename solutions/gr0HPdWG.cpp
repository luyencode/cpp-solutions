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

int DemPhanTuLonHonHayNhoHonPhanTuXungQuanh(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(i == 0 && a[i] != a[i + 1])   // xét đầu
        {
            dem++;
        }
        else if(i == n - 1 && a[i - 1] != a[i])  // Xét đuôi
        {
            dem++;
        }
        else if((a[i - 1] > a[i] && a[i] < a[i + 1]) || (a[i - 1] < a[i] && a[i] > a[i + 1]))
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
    int dem = DemPhanTuLonHonHayNhoHonPhanTuXungQuanh(a, n);
    printf("\nSo luong phan tu lon hon hoac nho hon phan tu xung quanh: %d", dem);

    getch();
    return 0;
}