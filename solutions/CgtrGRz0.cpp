/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

const int minYear = 1900, maxYear = 10000;
int KiemTraNamNhuan(int nam)
{
        return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
void TimSoNgayTrongThang(int thang, int nam)
{
    switch(thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("\nCo 31 ngay");
        break;
    case 4: case 6: case 9 : case 11:
        printf("\nCo 30 ngay");
        break;
    case 2:
        int Check = KiemTraNamNhuan(nam);
        if(Check == 1)
        {
            printf("\nCo 29 ngay !");
        }
        else
        {
            printf("\nCo 28 ngay !");
        }
    }
}

int main()
{
    int Thang, Nam;

    do
    {
        printf("\nNhap vao thang: ");
        scanf("%d", &Thang);
        if (Thang < 1 || Thang > 12)
            printf("\nDu lieu thang khong hop le. Xin kiem tra lai!");
    }while(Thang < 1 || Thang > 12);
    do
    {
        printf("\nNhap vao nam: ");
        scanf("%d", &Nam);
        if(Nam < minYear || Nam > maxYear)
        {
            printf("\nDu lieu nam khong hop le. Xin kiem tra lai!");
        }
    }while(Nam < minYear || Nam > maxYear);
    TimSoNgayTrongThang(Thang, Nam);

    getch();
    return 0;
}