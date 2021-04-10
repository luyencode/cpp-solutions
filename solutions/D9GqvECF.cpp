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
    //b = 9, a = 5

    a = b - a; // 9 - 5 = 4

    b = b - a; // 9 - 4 = 5

    a = a + b; // 4 + 5 = 9

    //b = 5, a = 9
}

void SapXepPhanTuTren1DongGiamDanTuTraiSangPhai(int a[][MAX], int dong, int cot, int x)
{
    for(int i = 0; i < cot - 1; i++)
    {
        for(int j = i + 1; j < cot; j++)
        {
            if(a[x][i] < a[x][j])
            {
                HoanVi(a[x][i], a[x][j]);
            }
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot, x;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    do{
        printf("\nNhap dong muon sap xep: ");
        scanf("%d", &x);
        if(x < 0 || x > dong - 1)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai!");
        }
    }while(x < 0 || x > dong - 1);

    SapXepPhanTuTren1DongGiamDanTuTraiSangPhai(a, dong, cot, x);
    printf("\nMa tran sau khi sap xep: \n");
    XuatMang(a, dong, cot);

    getch();
    return 0;
}