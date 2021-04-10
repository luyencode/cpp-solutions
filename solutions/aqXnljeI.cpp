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

int KiemTraNguyenTo(int n)
{
    if(n < 2)
    {
        return 0;
    }
    else if(n > 2)
    {
        if(n % 2 == 0)
        {
            return 0;
        }
        for(int i = 3; i <= sqrt((float)n); i += 2)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
void XuatCacSoNguyenToTheoThuTuTangDan(int a[][MAX], int dong, int cot)
{
    int temp[MAX];
    int idx = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(KiemTraNguyenTo(a[i][j]) == 1)
            {
                temp[idx++] = a[i][j];
            }
        }
    }
    for(int i = 0; i < idx - 1; i++)
    {
        for(int j =  i + 1; j < idx; j++)
        {
            if(temp[i] > temp[j])
            {
                HoanVi(temp[i], temp[j]);
            }
        }
    }
    printf("\nXuat cac so nguyen to theo thu tu tang dan: \n");
    for(int i = 0; i < idx; i++)
    {
        printf("%4d", temp[i]);
    }
}
int main()
{
    int a[MAX][MAX], dong, cot, y;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    
    XuatCacSoNguyenToTheoThuTuTangDan(a, dong, cot);
    
    

    getch();
    return 0;
}