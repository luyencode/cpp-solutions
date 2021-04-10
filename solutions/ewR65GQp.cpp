/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct ThiSinh
{
    char MaThiSinh[5];
    char HoTen[30];
    float DiemToan, DiemLy, DiemHoa;
    float DiemTong;
};
typedef struct ThiSinh THISINH;

void NhapThiSinh(THISINH &a)
{
    fflush(stdin);
    printf("Nhap ma thi sinh: \n");
    gets(a.MaThiSinh);

    fflush(stdin);
    printf("Nhap ten thi sinh: \n");
    gets(a.HoTen);

    printf("Nhap diem toan: \n");
    scanf("%f", &a.DiemToan);

    printf("Nhap diem ly: \n");
    scanf("%f", &a.DiemLy);

    printf("Nhap diem hoa: \n");
    scanf("%f", &a.DiemHoa);
}
float TinhDiemTong(THISINH a)
{
    return a.DiemToan + a.DiemLy + a.DiemHoa;
}
void XuatThiSinh(THISINH a)
{
    printf("Ma thi sinh: %s\n", a.MaThiSinh);
    printf("Ten thi sinh: %s\n", a.HoTen);

    printf("Diem toan: %.2f\n", a.DiemToan);
    printf("Diem toan: %.2f\n", a.DiemLy);
    printf("Diem toan: %.2f\n", a.DiemHoa);

    printf("Diem tong: %.2f", TinhDiemTong(a)); 
}

int main()
{
    THISINH a;
    NhapThiSinh(a);
    XuatThiSinh(a);
    getch();
    return 0;
}