/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#define MAX 100

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap vao phan tu a[%d] = ", i);
        scanf_s("%d", &a[i]);
    }
}
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

int TimTanSuatXuatHienMax(int a[], int n)
{
    int Max = 1;  // 1 phần tử tối thiêu xuất hiện
    for (int i = 0; i < n; i++)
    {
        int dem = 1; // Tính chính nó
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                dem++;
            }
        }
        if (dem > Max)
        {
            Max = dem;
        }
    }
    return Max;
}

int KiemTraBiTrung(int a[], int n, int index)
{
    for (int i = index - 1; i >= 0; i--)
    {
        if (a[i] == a[index])
        {
            return 0; // Bị trùng
        }
    }
    return 1; // Không bị trùng
}

int DemTanSuatXuatHien(int a[], int n, int index)
{
    int dem = 1; // Tính luôn chính nó 
    for (int i = index + 1; i < n; i++)
    {
        if (a[i] == a[index])
        {
            dem++;
        }
    }
    return dem;
}

void LietKeCacSoXuatHienNhieuNhat(int a[], int n)
{
    int TanSuatMax = TimTanSuatXuatHienMax(a, n);
    for (int i = 0; i < n; i++)
    {
        int CheckTrung = KiemTraBiTrung(a, n, i);
        if (CheckTrung == 1)  // chỉ xử lý khi không trùng
        {
            int TanSuat = DemTanSuatXuatHien(a, n, i);
            //printf("\nPhan tu %d xuat hien %d lan", a[i], TanSuat);

            if (TanSuat == TanSuatMax)
            {
                printf("\nPhan tu xuat hien nhieu nhat la %d", a[i]);
            }
        }
    }
    printf("\n=> So lan xuat hien la: %d", TanSuatMax);
}
int main()
{
    int n;
    do
    {
        printf("\nNhap vao so luong phan tu cua mang: ");
        scanf_s("%d", &n);
        if (n < 0 || n > MAX)
        {
            printf("\nSo luong phan tu khong hop le. Xin kiem tra lai !");
        }
    } while (n < 0 || n > MAX);

    int a[MAX];
    NhapMang(a, n);
    XuatMang(a, n);

    /*int TanSuatMax = TimTanSuatXuatHienMax(a, n);
    printf("\nTan suat xuat hien lon nhat la: %d", TanSuatMax);*/

    LietKeCacSoXuatHienNhieuNhat(a, n);

    getch();
    return 0;
}