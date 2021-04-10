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

void LietKeCacDongCoNhieuSoNguyenToNhat(int a[][MAX], int dong, int cot)
{
    int dem[MAX] = {0};
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(KiemTraNguyenTo(a[i][j]) == 1)
            {
                dem[i]++;
            }
        }
    }
    int Max = dem[0];
    for(int i = 1; i < dong; i++)
    {
        Max = (Max > dem[i]) ? Max : dem[i]; 
    }
    for(int i = 0; i < dong; i++)
    {
        if(Max == dem[i])
        {
            printf("\nDong %d co so nguyen to nhieu nhat: %d so nguyen to", i, Max); 
        }
    }
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongCoNhieuSoNguyenToNhat(a, dong, cot);

    getch();
    return 0;
}