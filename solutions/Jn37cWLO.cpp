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

void TachTungChuSo(int n, int b[])
{
    int ChuSo;
    n = abs(n);
    do
    {
        ChuSo = n % 10;
        b[ChuSo]++;
        n /= 10;
    }while(n > 0);
}

int TimChuSoXuatHienNhieuNhat(int a[][MAX], int dong, int cot)
{
    int b[10] = {0}; // Khởi tạo mảng 10 phần tử toàn 0
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            TachTungChuSo(a[i][j], b);
        }
    }
    int ChuSoXuatHienNhieuNhat = 0;
    for(int i = 0; i < 10; i++)
    {
        if(b[ChuSoXuatHienNhieuNhat] < b[i])
        {
            ChuSoXuatHienNhieuNhat = i;
        }
    }
    return ChuSoXuatHienNhieuNhat;
}

int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int ChuSoXuatHienNhieuNhat = TimChuSoXuatHienNhieuNhat(a, dong, cot);
    printf("\nChu so xuat hien nhieu nhat la %d", ChuSoXuatHienNhieuNhat);
    


    getch();
    return 0;
}