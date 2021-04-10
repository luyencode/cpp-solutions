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

int KiemTraHoanThien(int n)
{
    int tong = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            tong += i;
        }
    }
    if(tong == n)
    {
        return 1;
    }
    return 0;
}

int TimSoHoanThienDauTien(int a[][MAX], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(KiemTraHoanThien(a[i][j]) == 1)
            {
                return a[i][j];
            }
        }
    }
    return -1;
}

int TimSoHoanThienNhoNhat(int a[][MAX], int dong, int cot)
{
    int SoHoanThienMin = TimSoHoanThienDauTien(a, dong, cot); 
    if (SoHoanThienMin == -1) 
    { 
        return -1; 
    } 
    for (int i = 0; i < dong;i++) 
    { 
        for (int j = 0; j < cot; j++) 
        { 
            if (KiemTraHoanThien(a[i][j]) == 1) 
            { 
                SoHoanThienMin = (SoHoanThienMin < a[i][j]) ? SoHoanThienMin : a[i][j]; 
            } 
        } 
    } 
    return SoHoanThienMin; 
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);


    int SoHoanThienMin = TimSoHoanThienNhoNhat(a, dong, cot);
    printf("\nSo hoan thien nho nhat = %d", SoHoanThienMin);

    getch();
    return 0;
}