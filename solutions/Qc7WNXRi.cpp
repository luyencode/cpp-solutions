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
/*
Ý TƯƠNG: Đứng từ vị trí hiện tại ta sẽ lùi về xét các vị trí trước đó
xem giá trị có bị trùng hay không? Nếu có thì bỏ qua, nếu không thì 
sẽ chạy từ vị trí đó về sau để đếm xem có bao nhiêu phần tử trùng với nó

*/
int KiemTraBiTrung(int a[], int n, int ViTri)
{
    for (int i = ViTri - 1; i >= 0; i--)
    {
        if (a[i] == a[ViTri])
        {
            return 0;
        }
    }
    return 1;
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

void DemTanSuatXuatHien(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int CheckTrung = KiemTraBiTrung(a, n, i);
        if (CheckTrung == 1)
        {
            int dem = DemSoLuongPhanTuTrung(a, n, i);
            printf("\nPhan tu %d xuat hien %d lan", a[i], dem);
        }
    }
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
            printf("\nSo luong phan tu nhap vao khong hop le. Xin kiem tra lai !");
        }
    } while (n < 0 || n > MAX);

    int a[MAX];
    NhapMang(a, n);
    XuatMang(a, n);

    DemTanSuatXuatHien(a, n);

    getch();
    return 0;
}