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
/*
Đặt a = 0101, b = 0011
a = a ^ b = 0110
Lúc này a = 0110, b = 0011
b = b ^ a = 0101 = a 
Lúc này a = 0110, b = 0101
a = a ^ b = 0011 = b 
*/
void HoanVi(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void XuatCacGiaTriAmTheoThuTuGiamDan_2(int a[][MAX], int dong, int cot)
{
    int n = dong * cot;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i / cot][i % cot] < 0)
            {
                if(a[i / cot][i % cot] < a[j / cot][j % cot])
                {
                    HoanVi(a[i / cot][i % cot], a[j / cot][j % cot]);
                }
            }
        }
    }
    printf("\nxuat cac gia tri am theo thu tu giam dan ma khong thay doi ma tran: \n");
    /*for(int i = dong - 1; i >= 0; i--)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n\n");
    }*/
}
int main()
{
    int a[MAX][MAX], dong, cot, y, temp[MAX][MAX];
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    XuatCacGiaTriAmTheoThuTuGiamDan_2(a, dong, cot);
    XuatMang(a, dong, cot);



    getch();
    return 0;
}