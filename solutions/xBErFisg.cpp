/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
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
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}
int timvitriduongnhonhat(float a[], int n)
{
    int i;
    int min;
    int dem = 0 ;
    for (i = 0; i < n; i++)
    {
        if(a[i] > 0)   // kiểm tra xem có dương ?
        {
            dem++;      // đếm số lượng số dương
            min = i;     // i chính là vị trí min
            break;      // vì giá trị dương đầu tiên là giá trị min
        }
    }  
    if (dem == 0)     // nếu không có giá trị dương
        return -1;
    for (i = i + 1; i < n; i++)
    {
        if((a[i] > 0) && (a[i] < a[min]))
        {
           min = i;
        }
    }
    return min;
}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);

    int vitriduongnhonhat = timvitriduongnhonhat(a, n);
    printf("\nVi tri gia tri duong nho nhat la %d", vitriduongnhonhat);

    getch();
    return 0;
}