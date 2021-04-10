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

void TinhTongCacDong(int a[][MAX], int dong, int cot, int b[])
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            b[i] += a[i][j];
        }
    }
}
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Dong(int a[][MAX], int cot, int dong1, int dong2)
{
    for(int j = 0; j < cot; j++)
    {
        HoanVi(a[dong1][j], a[dong2][j]);
    }
}

void SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(int a[][MAX], int dong, int cot)
{
    int b[MAX] = {0};
    TinhTongCacDong(a, dong, cot, b);
    for (int i = 0; i < dong - 1; i++)  
    {   
        for (int j= i + 1; j < dong; j++)   
        {    
            if (b[i] > b[j])    
            {
                HoanVi2Dong(a, cot, i, j);
                HoanVi(b[i], b[j]);
            }
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(a, dong, cot);
    printf("\nMa tran sau khi sap xep: \n");
    XuatMang(a, dong, cot);
    getch();
    return 0;
}