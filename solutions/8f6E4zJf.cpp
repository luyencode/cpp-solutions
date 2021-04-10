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
1 2 3            7 4 1
A = 4 5 6   ---> C = 8 5 2
7 8 9             9 6 3

Nhận thấy rằng hàng đã chuyển thành cột và ngược lại, ta nghĩ ngay đến 
công thức B[i][j] = A[j][i]
Nhưng đây là công thức quen thuộc của ma trận chuyển vị
kết quả khi chuyển vị như sau
1 4 7
B = 2 5 8
3 6 9

So với kết quả đích, ta thấy C chỉ khác B ở thứ tự các cột
nghĩa là cột (j) của C là cột (n - 1 - j) của B
C[i][j] = B[i][n - 1 - j] = A[n - 1 - j][i]
*/
void XoayMaTran1Goc90DoTheoChieuKimDongHo(int a[][MAX], int dong, int cot)
{
    int c[MAX][MAX];
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%4d", c[i][j] = a[cot - 1 - j][i]);
        }
        printf("\n\n");
    }
}

void XoayMaTran1Goc90DoTheoChieuKimDongHo_2(int a[][MAX], int dong, int cot)
{
    for (int i = 0; i < cot; i++)  
    {   
        for (int j = dong - 1; j >= 0; j--)   
        {    
            printf("%4d", a[j][i]);   
        }   
        printf("\n\n");  
    } 
}
int main()
{
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    printf("\nXoay ma tran 1 goc 90 do theo chieu kim dong ho: \n");
    XoayMaTran1Goc90DoTheoChieuKimDongHo(a, dong, cot);

    getch();
    return 0;
}