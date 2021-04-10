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

void SapXepDongCoChiSoChanTangDanLeGiamDan(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot - 1; j++)
        {
            for(int k = j + 1; k < cot; k++)
            {
                if(i % 2 == 0)
                {
                    if (a[i][j] > a[i][k])      
                    {
                        HoanVi(a[i][j], a[i][k]);
                    }
                }
                else
                {
                    if (a[i][j] < a[i][k])      
                    {
                        HoanVi(a[i][j], a[i][k]);
                    }
                }
            }
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot, y;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    
    SapXepDongCoChiSoChanTangDanLeGiamDan(a, dong, cot);
    printf("\nMa tran sau khi sap xep: \n");
    XuatMang(a, dong, cot);
    

    getch();
    return 0;
}