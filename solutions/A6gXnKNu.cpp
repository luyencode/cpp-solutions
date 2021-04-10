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
- Kiểm tra phần tử đó có lớn nhất trên dòng nó đang đứng hay không ?
- Kiểm tra phần tử đó có lớn nhất trên cột nó đang đứng hay không ?
- Kiểm tra phần tử đó có lớn nhất trên 2 đường chéo hay không (Đây là hàm khá phức tạp). Trường hợp này mình sẽ cho duyệt theo 4 hướng (4 while):
+ từ vị trí phần tử hiện tại, i--, j-- (giảm qua trái)
+ từ vị trí phần tử hiện tại i--,j++ (giảm phải)
+ // i++,j++ (tăng phải)
+ // i++,j-- (tăng trái)

Sau khi thực hiện 3 hàm trên, duyệt ma trận sẽ tìm được phần tử "Hoàng Hậu"
*/
bool KiemTraCoPhaiPhanTuHoangHau(int a[][MAX], int vtdong, int vtcot, int dong, int cot)
{
    int x = a[vtdong][vtcot];

    // kiểm tra dòng
    for(int i = 0; i < cot; i++)
    {
        if(a[vtdong][i] > x)
        {
            return false;
        }
    }
    // kiểm tra cột
    for(int j = 0; j < dong; j++)
    {
        if(a[j][vtcot] > x)
        {
            return false;
        }
    }
    //ktra duong cheo thu nhat
    int vtdong1 = vtdong + 1;
    int vtcot1 = vtcot + 1;
    while (vtcot1 + 1 < cot && vtdong1 < vtdong)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;
        // tăng phải
        vtcot1++;
        vtdong1++;
    }
    vtdong1 = vtdong - 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 >= 0)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;
        //giảm qua trái
        vtcot1--;
        vtdong1--;
    }
    // duong cheo thu 2
    vtdong1 = vtdong + 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 < dong)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;
        // tăng trái
        vtdong1++;
        vtcot1--;
    }
    vtdong1 = vtdong - 1;
    vtcot1 = vtcot + 1;

    while (vtdong1 - 1 >= 0 && vtcot1 < cot)
    {
        if (a[vtcot1][vtdong1] > x)
            return false;
        // giảm phải
        vtdong1--;
        vtcot1++;
    }
    return true;
}

int DemSoLuongPhanTuHoangHau(int a[][MAX], int dong, int cot)
{
    int dem = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(KiemTraCoPhaiPhanTuHoangHau(a, i, j, dong, cot) == true)
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int dem = DemSoLuongPhanTuHoangHau(a, dong, cot);
    printf("\nSo luong phan tu hoang hau = %d", dem);
    getch();
    return 0;
}