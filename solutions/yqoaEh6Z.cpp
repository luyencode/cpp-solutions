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
    int i, j;
    printf("\nCac cap gia tri (a, b) thoa DK a <= b , khac nhau tung doi mot: ");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j] || a[i] == a[j])
            {
                printf("\nCap <%.3f, %.3f> vi tri <a[%d],a[%d]>", a[i], a[j], i, j);
            }
        }
    }    
}

int main()
{
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKe(a, n);

    getch();
    return 0;
}