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
Cách 1: dùng thêm mảng phụ, lưu lại cột bên trái ngoài cùng, rồi gán từ trái qua phải. Cuối cùng là gán mảng vào cột cuối bên phải
*/
void DichPhaiXoayVongCacCotTrongMaTran(int a[][MAX], int dong, int cot)
{
    int temp[MAX];
    for(int i = 0; i < dong; i++)
    {
        temp[i] = a[i][cot - 1];    
    }
    for(int j = cot - 1; j > 0; j--)
    {
        for(int i = 0; i < dong; i++)
        {
            a[i][j] = a[i][j - 1];
        }
    }
    for(int i = 0; i < dong; i++)
    {
        a[i][0] = temp[i];
    }
}

// Cách 2: Hoán vị 2 cột từ trái qua phải
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Cot(int a[][MAX], int dong, int cot, int cot1, int cot2)
{
    if((cot1 >= 0 && cot1 < cot) && (cot2 >= 0 && cot2 < cot))
    {
        for(int i = 0; i < dong; i++)
        {
            HoanVi(a[i][cot1], a[i][cot2]);
        }
    }
}

void DichPhaiXoayVongCacCotTrongMaTran_Cach2(int a[][MAX], int dong, int cot)
{
    for(int j = cot - 1; j > 0; j--)
    {
        for(int i = 0; i < dong; i++)
        {
            HoanVi(a[i][j], a[i][j - 1]);
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichPhaiXoayVongCacCotTrongMaTran_Cach2(a, dong, cot);
    printf("\nMa tran sau khi dich phai xoay vong cac cot: \n");
    XuatMang(a, dong, cot);

    getch();
    return 0;
}