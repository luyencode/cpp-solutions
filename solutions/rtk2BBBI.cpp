/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
// nguyên tố => true
bool KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void LietKeNguyenTo(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(KiemTraNguyenTo(i) == true)
            printf("%4d", i);
    }
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);

    LietKeNguyenTo(n);

    getch();
    return 0;
}