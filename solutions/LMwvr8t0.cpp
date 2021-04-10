/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMaTran(int a[][MAX], int &n)
{
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n < 1 || n > MAX);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("\nNhap vao a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMaTran(int a[][MAX], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n\n");
    }
}

int TimGiaTriNhoNhatMaTranTamGiacDuoiDuongCheoChinh(int a[][MAX], int n)
{
    int Min = a[n - 1][0];
    /*for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("%4d",a[i][j]);
        }
    }*/
    for(int i = 1; i < n; i++)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            Min = (a[i][j] < Min) ? a[i][j] : Min;
        }
    }
    return Min;
}

int TimGiaTriNhoNhatMaTranTamGiacDuoiDuongCheoPhu(int a[][MAX], int n)
{
    int Min = a[n - 1][n - 1];
    for(int i = 1; i < n; i++)
    {
        for(int j = n - i; j < n; j++)
        {
            Min = (a[i][j] < Min) ? a[i][j] : Min;
        }
    }
    return Min;
}
int main()
{
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    int Min = TimGiaTriNhoNhatMaTranTamGiacDuoiDuongCheoChinh(a, n);
    printf("\nGia tri nho nhat ma tran tam giac duoi duong cheo chinh = %d", Min);

    int Min2 = TimGiaTriNhoNhatMaTranTamGiacDuoiDuongCheoPhu(a, n);
    printf("\nGia tri nho nhat ma tran tam giac duoi duong cheo phu = %d", Min2);

    getch();
    return 0;
}