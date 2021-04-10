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

void DuaChanVeDau(int a[], int ViTriDoi)
{
    int tam = a[ViTriDoi];           // biến tạm lưu tất cả các giá trị thỏa ĐK đổi
    for(int i = ViTriDoi; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = tam;
}

void Dua0VaoGiua(int a[], int ViTriDoi, int ViTriChanCuoi)
{
    // Do 0 nằm giữa mảng nên 0 sẽ là giá trị chẵn cuối để thỏa yêu cầu bài toán
    for(int i = ViTriDoi; i > ViTriChanCuoi; i--)
    {
        a[i] = a[i - 1];        
    }
    a[ViTriChanCuoi] = 0;
}

void DuaChanVeDauLeVeCuoi0NamGiuaMang(int a[], int n)
{
    int i, dem;
    int ViTriChanCuoi = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] != 0)
        {
            DuaChanVeDau(a, i);
        }
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            ViTriChanCuoi = i;
            break;
        }
    }
    for(i; i < n; i++) // bỏ khởi tạo i để tránh dư 1 số 0 
    {
        if(a[i] == 0)
        {
            Dua0VaoGiua(a, i, ViTriChanCuoi);
        }
    }
}
int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DuaChanVeDauLeVeCuoi0NamGiuaMang(a, n);
    printf("\nDua chan ve dau, le ve cuoi, 0 nam giua mang: ");
    xuat(a, n);

    getch();
    return 0;
}