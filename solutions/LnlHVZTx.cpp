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
int TimSoNgayTrongThang(int thang, int nam)
{
    int NgayTrongThang;
    switch(thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        NgayTrongThang = 31;
        break;
    case 4: case 6: case 9 : case 11:
        NgayTrongThang = 30;
        break;
    case 2:
        int Check = KiemTraNamNhuan(nam);
        if(Check == 1)
        {
            NgayTrongThang = 29;
        }
        else
        {
            NgayTrongThang = 28;
        }
    }
    return NgayTrongThang;
}

void TimNgayTruocDo(int Ngay, int Thang, int Nam)
{
    int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
    if(Ngay == 1)            // Nếu ngày nhập vào là 1
    {
        Ngay = NgayTrongThang;        // ngày trước đó là số ngày trong tháng trước 
        if(Thang == 1)            // Nếu tháng là 1
        {
            Thang = 12;
            Nam--;
        }
        else                     // Tháng khác 1
            Thang--;
    }
    else                // Ngày khác 1
        Ngay--;
        printf("\nNgay truoc do la: %d - %d - %d ", Ngay, Thang, Nam);
    }
    int main()
    {
        int Ngay, Thang, Nam;

        do
        {
            printf("\nNhap vao nam: ");
            scanf("%d", &Nam);
            if(Nam < minYear || Nam > maxYear)
            {
                printf("\nDu lieu nam khong hop le. Xin kiem tra lai!");
            }
        }while(Nam < minYear || Nam > maxYear);

        do
        {
            printf("\nNhap vao thang: ");
            scanf("%d", &Thang);
            if (Thang < 1 || Thang > 12)
                printf("\nDu lieu thang khong hop le. Xin kiem tra lai!");
        }while(Thang < 1 || Thang > 12);

        int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
        do
        {
            printf("\nNhap vao ngay: ");
            scanf("%d",&Ngay);
            if(Ngay < 1 || Ngay > NgayTrongThang)
            {
                printf("\nDu lieu ngay khong hop le. Xin kiem tra lai!");
            }
        }while(Ngay < 1 || Ngay > NgayTrongThang);

        TimNgayTruocDo(Ngay, Thang, Nam);

        getch();
        return 0;
    }