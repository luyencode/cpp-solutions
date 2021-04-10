/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(float a[][MAX], int &dong, int &cot)
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
            float temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%f", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(float a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%8.3f", a[i][j]);
        }
        printf("\n\n");
    }
}

float TinhTichCot(float a[][MAX], int y, int dong)
{
    float tich = 1;
    for(int i = 0; i < dong; i++)
    {
        if(a[i][y] > 0)
        {
            tich *= a[i][y];
        }
    }
    return tich;
}
int main()
{
    float a[MAX][MAX];
    int dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int y;
    do{
        printf("\nNhap vao cot y can tinh tich: ");
        scanf("%d", &y);

        if(y < 0 || y > cot - 1)
        {
            printf("\nChi so cot y khong hop le. Xin kiem tra lai !");
        }
    }while(y < 0 || y > cot - 1);

    float tich = TinhTichCot(a, y, dong);
    printf("\nTich cot %d = %f", y, tich);
    getch();
    return 0;
}