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
ban đâu: 87 75 62 54
         46 40 33 28
         20 18 15 10
        -20 67 53 23

ma trận sau khi dịch xuống xoay vòng các hàng
        -20 67 53 23
         87 75 62 54
         46 40 33 28
         20 18 15 10
*/

/*
Cách 1: dùng thêm mảng phụ, lưu lại hàng cuối, rồi gán từ cuối lên. Cuối cùng là gán mảng vào hàng đầu
*/
void DichXuongXoayVongCacHangTrongMaTran(int a[][MAX], int dong, int cot)
{
    // Dùng mảng phụ lưu lại hàng cuối
    int temp[MAX];
    for(int i = 0; i < dong; i++)
    {
        temp[i] = a[cot - 1][i];
    }
    // Gán từ cuối lên
    for(int i = cot - 1; i >= 1; i--)
    {
        for(int j = 0; j < dong; j++)
        {
            a[i][j] = a[i - 1][j];
        }
    }
    // Gán mảng phụ vào hàng đầu
    for(int i = 0; i < dong; i++)
    {
        a[0][i] = temp[i];
    }
}

// Cách 2:Hoán vị 2 hàng tử cuối lên.

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

void DichXuongXoayVongCacHangTrongMaTran_Cach2(int a[][MAX], int dong, int cot)
{
    for(int i = cot - 1; i >= 1; i--)
    {
        for(int j = 0; j < dong; j++)
        {
            HoanVi(a[i][j], a[i - 1][j]);
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichXuongXoayVongCacHangTrongMaTran_Cach2(a, dong, cot);
    printf("\nMa tran sau khi dich xuong xoay vong cac hang: \n");
    XuatMang(a, dong, cot);

    getch();
    return 0;
}