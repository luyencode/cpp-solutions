/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
//
//const int minYear = 1900, maxYear = 10000;
//int KiemTraNamNhuan(int nam)
//{
//    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
//}
//int TimSoNgayTrongThang(int thang, int nam)
//{
//    int NgayTrongThang;
//    switch(thang)
//    {
//    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        NgayTrongThang = 31;
//        break;
//    case 4: case 6: case 9 : case 11:
//        NgayTrongThang = 30;
//        break;
//    case 2:
//        int Check = KiemTraNamNhuan(nam);
//        if(Check == 1)
//        {
//            NgayTrongThang = 29;
//        }
//        else
//        {
//            NgayTrongThang = 28;
//        }
//    }
//    return NgayTrongThang;
//}
//int TimNgayThuBaoNhieuTrongNam(int Ngay, int Thang, int Nam)
//{
//    int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
//    int S = Ngay;
//    for(int i = 1; i < Thang; i++) 
//    { 
//        S = S + NgayTrongThang;
//    }
//    return S;
//}
//
//int main()
//{
//    int Ngay, Thang, Nam;
//    do
//    {
//        printf("\nNhap vao nam: ");
//        scanf("%d", &Nam);
//        if(Nam < minYear || Nam > maxYear)
//        {
//            printf("\nDu lieu nam khong hop le. Xin kiem tra lai!");
//        }
//    }while(Nam < minYear || Nam > maxYear);
//
//    do
//    {
//        printf("\nNhap vao thang: ");
//        scanf("%d", &Thang);
//        if (Thang < 1 || Thang > 12)
//            printf("\nDu lieu thang khong hop le. Xin kiem tra lai!");
//    }while(Thang < 1 || Thang > 12);
//
//    int NgayTrongThang = TimSoNgayTrongThang(Thang, Nam);
//    do
//    {
//        printf("\nNhap vao ngay: ");
//        scanf("%d",&Ngay);
//        if(Ngay < 1 || Ngay > NgayTrongThang)
//        {
//            printf("\nDu lieu ngay khong hop le. Xin kiem tra lai!");
//        }
//    }while(Ngay < 1 || Ngay > NgayTrongThang);
//
//    int S = TimNgayThuBaoNhieuTrongNam(Ngay, Thang, Nam);
//    printf("\nNgay thu %d trong nam", S);
//    getch();
//    return 0;
//}

int main()
{
    int day, month, year, s, i;
    printf("\nNhap ngay, thang, nam: ");
    scanf("%d%d%d", &day, &month, &year);

    s = day;
    for(i = 1; i < month; i++)
    {
        switch (i)
        {
            case 4: case 6: case 9 : case 11: s+= 30; break;
            case 2: s += (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
                break;
        default: s += 31;
        }
    }
    printf("\nNgay thu %d trong nam", s);

    getch();
    return 0;
}