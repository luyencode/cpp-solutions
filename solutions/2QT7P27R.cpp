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

void GanBienVaoMang(int a[][MAX],int dong, int cot, int temp[], int &idx)
{
    int i = 0, j;            // giả sử có 3 dòng, 3 cột
    // biên hàng trên
    for(j = i; j < cot; j++) 
    {
        temp[idx++] = a[i][j];   //  i = 0, j chạy từ 0 đến 2
     }
    // biên cột phải
    for(i++, j--; i < dong; i++)  // i chạy từ 1 đến 2, j = 1
    {
        temp[idx++] = a[i][j];
    }
    // biên hàng dưới
    for(i--, j--; j >= 0; j--)
    {
        temp[idx++] = a[i][j];
    }
    // biên cột trái
    for(i--, j++; i > 0; i--)
    {
        temp[idx++] = a[i][j];
    }
}

void HoanVi(int &a, int &b)
{
    int tam = a;
    a = b;
    b = tam;
}
void SapXepMangTangDan(int temp[], int idx)
{
    for(int i = 0; i < idx - 1; i++)
    {
        for(int j = i + 1; j < idx; j++)
        {
            if(temp[i] > temp[j])
            {
                HoanVi(temp[i], temp[j]);
            }
        }
    }
}

void GanMangVaoBien(int a[][MAX],int dong, int cot, int temp[])
{
    int i = 0, j, idx = 0;            // giả sử có 3 dòng, 3 cột
    // biên hàng trên
    for(j = i; j < cot; j++) 
    {
          a[i][j] = temp[idx++];   //  i = 0, j chạy từ 0 đến 2
     }
    // biên cột phải
    for(i++, j--; i < dong; i++)  // i chạy từ 1 đến 2, j = 1
    {
         a[i][j] = temp[idx++];
    }
    // biên hàng dưới
    for(i--, j--; j >= 0; j--)
    {
         a[i][j] = temp[idx++];
    }
    // biên cột trái
    for(i--, j++; i > 0; i--)
    {
         a[i][j] = temp[idx++];
    }
}

void SapXepCacGiaTriNamTrenBienTangDan(int a[][MAX], int dong, int cot)
{
    int temp[MAX], idx = 0;  
    GanBienVaoMang(a, cot, dong, temp, idx);  
    SapXepMangTangDan(temp, idx);  
    GanMangVaoBien(a, cot, dong, temp); 

}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    SapXepCacGiaTriNamTrenBienTangDan(a, dong, cot);
    printf("\nMa tran sau khi sap xep: \n");
    XuatMang(a, dong, cot);
    getch();
    return 0;
}