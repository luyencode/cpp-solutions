/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int So;  // Khai báo
    printf("Nhap vao so = ");
        scanf_s("%d", &So);
    if (So < 10 || So > 99){
        printf("\nKhong hop le !");
        getch();
        return 0;
    }
    else  // Hợp lệ
    {  
        // Xử lý
        // 15 --> Muoi Lam
        int donvi = So % 10;
        int chuc = So / 10;

        if (chuc == 2)
        {
            printf("Hai");
        }
        else if (chuc == 3)
        {
            printf("Ba");
        }
        else if (chuc == 4)
        {
            printf("Bon");
        }
        else if (chuc == 5)
        {
            printf("Nam");
        }
        else if (chuc == 6)
        {
            printf("Sau");
        }
        else if (chuc == 7)
        {
            printf("Bay");
        }
        else if (chuc == 8)
        {
            printf("Tam");
        }
        else if (chuc == 9)
        {
            printf("Chin");
        }
        printf(" Muoi ");

        if (donvi == 1)
        {
            printf("Mot");
        }
        else if (donvi == 2)
        {
            printf("Hai");
        }
        else if (donvi == 3)
        {
            printf("Ba");
        }
        else if (donvi == 4)
        {
            printf("Bon");
        }
        else if (donvi == 5)
        {
            printf("Nam");
        }
        else if (donvi == 6)
        {
            printf("Sau");
        }
        else if (donvi == 7)
        {
            printf("Bay");
        }
        else if (donvi == 8)
        {
            printf("Tam");
        }
        else if (donvi == 9)
        {
            printf("Chin");
        }
    }
    getch();
    return 0;
}