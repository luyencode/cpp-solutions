/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
    Số chính phương là số mà kết quả khai căn bậc 2 là 1 số nguyên
    sqrt(4) = 2.00000 => ép về nguyên = 2 => vì 2.000  == 2 (true) => là số chính phương
    sqrt(5) = 2.23234 => ép về nguyên = 2 => vì 2.4324 != 2 (false) => không là số chính phương

    */
bool KiemTraChinhPhuong(int n)
{
    return sqrt(float(n)) == (int)sqrt((float)n);
}

void LietKeChinhPhuong(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(KiemTraChinhPhuong(i) == true)
            printf("%4d", i);
    }
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    LietKeChinhPhuong(n);

    getch();
    return 0;
}