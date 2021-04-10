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
    if(n == 0)
        return;
    xuat(a, n - 1);
    printf("%4d", a[n - 1]);
}

int demPhanBiet_1(int a[], int n)
{
    if(n < 1)
        return 0;
    if(n == 1)
        return 1;
    
    int dem = demPhanBiet_1(a, n - 1);
    
    int flag = 1;
    for(int i = 0; i <= n - 2; i++)
    {
        if(a[i] == a[n - 1])
            flag = 0;
    }
    if(flag == 1)
        dem++;
    return dem;
}

// cải tiến: thêm điều kiện lặp để hạn chế số lần lặp kiểm tra
int demPhanBiet_2(int a[], int n)
{
    if(n < 1)
        return 0;
    if(n == 1)
        return 1;
    
    int dem = demPhanBiet_2(a, n - 1);
    
    int flag = 1;
    for(int i = 0; (i <= n - 2 && flag == 1); i++)
    {
        if(a[i] == a[n - 1])
            flag = 0;
    }
    
    return dem + flag;
}

// cải tiến: tinh giản biến đếm bằng cách thực hiện lời gọi hàm đệ quy sau
int demPhanBiet_3(int a[], int n)
{
    if(n < 1)
        return 0;
    if(n == 1)
        return 1;
    
    int flag = 1;
    for(int i = 0; (i <= n - 2 && flag == 1); i++)
    {
        if(a[i] == a[n - 1])
            flag = 0;
    }
    
    return flag + demPhanBiet_3(a, n - 1);
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    int dem = demPhanBiet_3(a, n);
    printf("\nCo %d gia tri phan biet trong mang", dem);

    getch();
    return 0;
}