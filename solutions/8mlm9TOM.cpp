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

int TinhTongCacGiaTriTrenBien(int a[][MAX], int dong, int cot)
{
    int tong = 0;
    // tổng các giá trị trên biên dòng
    for(int j = 0; j < cot; j++)
    {
        tong += a[0][j];
        tong += a[dong - 1][j];
    }
    // tổng các giá trị trên biên cột
    for(int i = 1; i < dong - 1; i++)  // không tính các phần tử bị trùng
    {
        tong += a[i][0];
        tong += a[i][cot - 1];
    }
    return tong;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int tong = TinhTongCacGiaTriTrenBien(a, dong, cot);
    printf("\nTong cac gia tri nam tren bien bang = %d", tong);
    
    getch();
    return 0;
}