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


void LietKeTanSuatXuatHien(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int dem = 0;
        for(int j = 0; j < n; j++) // j chạy từ 0
        {
            if(a[i] == a[j])
            {
                if(i <= j)         
                {
                    dem++;    
                }
                else
                {
                    break;    // bỏ qua phần tử bị trùng
                }
            }
        }
        if(dem != 0)
        {
            printf("\nGia tri %d co tan suat xuat hien la %d", a[i], dem);
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeTanSuatXuatHien(a, n);

    getch();
    return 0;
}