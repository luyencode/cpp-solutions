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
int KiemTraBiTrung(int a[], int n, int ViTri)
{
    for (int i = ViTri - 1; i >= 0; i--)
    {
        if (a[i] == a[ViTri])
        {
            return 0;  // bị trùng
        }
    }
    return 1;         // không bị trùng
}

// Đếm xem từ vị trí hiện tại trở về sau có bao nhiêu phần tử bị trùng
int DemSoLuongPhanTuTrung(int a[], int n, int ViTri)
{
    int dem = 1;
    for (int i = ViTri + 1; i < n; i++)
    {
        if (a[i] == a[ViTri])
        {
            dem++;
        }
    }
    return dem;
}

void LietKeCacGiaTriXuatHienDung1Lan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int CheckTrung = KiemTraBiTrung(a, n, i);
        if (CheckTrung == 1)
        {
            int dem = DemSoLuongPhanTuTrung(a, n, i);
            if(dem == 1)
            {
                printf("\nCac phan tu xuat hien dung 1 lan la %d", a[i]);
            }
        }
    }
}


int main()
{
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeCacGiaTriXuatHienDung1Lan(a, n);

    getch();
    return 0;
}