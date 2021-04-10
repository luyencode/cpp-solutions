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
Cách 1: dùng thêm mảng phụ, lưu lại hàng đầu, rồi gán từ trên xuống. Cuối cùng là gán mảng vào hàng cuối
*/
void DichLenXoayVongCacHangTrongMaTran(int a[][MAX], int dong, int cot)
{
    // Gán mảng phụ vào hàng đầu
    int temp[MAX];
    for(int i = 0; i < cot; i++)
    {
        temp[i] = a[0][i];
    }

    // Gán từ trên xuống
    for(int i = 0; i < dong - 1; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }
    // Dùng mảng phụ lưu lại hàng cuối
    for(int i = 0; i < cot; i++)
    {
        a[dong - 1][i] = temp[i];
    }
}

// Cách 2:Hoán vị 2 hàng tử trên xuống.

void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Dong(int a[][MAX], int dong, int cot, int dong1, int dong2)
{
    if((dong1 >= 0 && dong1 < dong) && (dong2 >= 0 && dong2 < dong))
    {
        for(int j = 0; j < cot; j++)
        {
            HoanVi(a[dong1][j], a[dong2][j]);
        }
    }
}

void DichLenXoayVongCacHangTrongMaTran_Cach2(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong - 1; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            HoanVi(a[i][j], a[i + 1][j]);
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichLenXoayVongCacHangTrongMaTran_Cach2(a, dong, cot);
    printf("\nMa tran sau khi dich len xoay vong cac hang: \n");
    XuatMang(a, dong, cot);

    getch();
    return 0;
}