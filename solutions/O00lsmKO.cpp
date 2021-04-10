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

void LietKe(float a[], int n)
{
    int flag = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0))
        {
            flag = 1;
            printf("%8.3f", a[i]);
        }
    }
    if (flag == 0)
        printf("Mang ko co gia tri do");
}
int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    printf("\nCac so trong mang thoa dieu kien\n ");
    LietKe(a, n);

    getch();
    return 0;
}