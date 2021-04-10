/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(int a[][MAX], int &dong, int &cot)
{
    //Nhập số dòng
    do
    {
        printf("\nNhap vao so dong: ");
        // Cách tà đạo: scanf("dong =%d",&dong);  // Lúc nhập phải viết thêm  chữ ( dong =  ) ở khung console
        scanf("%d",&dong);

        if(dong < 1 || dong > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    }while(dong < 1 || dong > MAX);

    //Nhập số cột
    do
    {
        printf("\nNhap vao so cot: ");
        scanf("%d",&cot);

        if(cot < 1 || cot > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    }while(cot < 1 || cot > MAX);
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%4d", a[i][j]);
        }
            printf("\n\n");
    }
}

int KiemTraHoanThien(int n)
{
    int Tong = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            Tong += i;
        }
    }
    if(Tong == n)
    {
        return 1;
    }
    return 0;
}
int TinhTongCacSoHoanThien(int a[][MAX], int dong, int cot)
{
    int Tong = 0;
    int n = dong * cot;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraHoanThien(a[i / cot][i % cot]) == 1)
        {
            Tong += a[i / cot][i % cot];
        }
    }
    return Tong;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int tong = TinhTongCacSoHoanThien(a, dong, cot);
    printf("\nTong cac so hoan thien = %d", tong);
    getch();
    return 0;
}