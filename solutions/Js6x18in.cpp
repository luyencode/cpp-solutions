/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
/* 
    Kiểm tra số đối xứng
    Định nghĩa : Số đối xứng là số đọc từ trái qua phải hay từ phải qua
    trái đều ra kết quả như nhau

    VD: ban đâu có số abcdef
    => số đảo ngược là fedcba
    nếu 2 số đó bằng nhau => đối xứng
    Vd : số 123 => đảo ngược là 321
    số 12345 => đảo ngược là 54321

    123 % 10 = 3 => ok
    123 / 10 = 12

    12 % 10 = 2 => ok
    12 / 10 = 1

    1 % 10 = 1 => ok
    1 / 10 = 0 = > end

    321 = 3*10^2 + 2*10^1 + 1*10^0
    54321 = 5*10^4 + 4*10^3 + 3*10^2 + 2*10^1 + 1*10^0
    => start = 10^(số chữ số - 1)
    => end = 10^0

    Ý tưởng: Tách ra từng chữ số và lấy chữ  số đó bắt đầu nhân cho 10^(x)
    với x là số chữ số - 1 và qua mỗi lần thì x sẽ liên tục giảm 1 đơn vị

    Cách 2: số 123 ta tách thành các chữ số 3,2,1
    0 * 10 + 3 = 3
    3 * 10 + 2 = 32
    32 * 10 + 1 = 321

    */
    
int main()
{
    int n;
    // Nhập n ( n > 0 )
    do
    {
        printf("\nNhap vao n ( n > 0 ): ");
        scanf_s("%d", &n);

        if (n <= 0)
        {
            printf("\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ");
        }

    } while (n <= 0);

    int SoChuSo = (int)log10((float)n) + 1;
    int SoNghichDao = 0;
    int themang = n;

    printf("\nSo %d co phai la so doi xung hay khong ?\n", n);
    while (themang != 0)
    {
        int ChuSo = themang % 10; // Lấy chữ số ra
        themang /= 10; // Bỏ chữ số vừa lấy ra
        SoNghichDao += ChuSo * pow(10.0, --SoChuSo);
    }
    /*while(themang != 0)
    {
        SoNghichDao = SoNghichDao * 10 + themang % 10;
        themang /= 10;
    }*/
    if(SoNghichDao == n)
    {
        printf("Dung !");
    }
    else
    {
        printf("Sai !");
    }

    getch();
    return 0;
}