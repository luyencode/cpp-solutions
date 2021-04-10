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

void HoanVi(int &a, int &b)
{
    a = a + b; // Cho đại
    b = a - b;  // 
    a = a - b;  // lấy trên trừ dưới
}

void SapXepAmTangDan(int a[][MAX], int dong, int cot)
{
    int i, j, Start1, Start2, d = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] < 0)
            {
                for(Start1 = i; Start1 < dong; Start1++)
                {
                    if(d == 0)
                    {
                        Start2 = j;
                    }
                    else
                    {
                        Start2 = 0;
                    }
                    for(; Start2 < cot; Start2++)
                    {
                        if(a[i][j] > a[Start1][Start2] && a[Start1][Start2] < 0)
                        {
                            HoanVi(a[i][j], a[Start1][Start2]);
                        }
                    }
                    if(Start2 == cot)
                    {
                        d = 1;
                    }
                }
                d = 0;
            }
        }
    }
}

void SapXepDuongGiamDan(int a[][MAX], int dong, int cot)
{
    int i, j, Start1, Start2, d = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] > 0)
            {
                for(Start1 = i; Start1 < dong; Start1++)
                {
                    if(d == 0)
                    {
                        Start2 = j;
                    }
                    else
                    {
                        Start2 = 0;
                    }
                    for(; Start2 < cot; Start2++)
                    {
                        if(a[i][j] < a[Start1][Start2] && a[Start1][Start2] > 0)
                        {
                            HoanVi(a[i][j], a[Start1][Start2]);
                        }
                    }
                    if(Start2 == cot)
                    {
                        d = 1;
                    }
                }
                d = 0;
            }
        }
    }
}

void SapXepAmTangDanDuongGiamDan0GiuNguyenViTri(int a[][MAX], int dong, int cot)
{
    SapXepAmTangDan(a, dong, cot);
    SapXepDuongGiamDan(a, dong, cot);
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    SapXepAmTangDanDuongGiamDan0GiuNguyenViTri(a, dong, cot);
    printf("\nMa tran sau khi sap xep: \n");
    XuatMang(a, dong, cot);
    
    getch();
    return 0;
}