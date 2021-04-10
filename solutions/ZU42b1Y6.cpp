/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int STRLEN(char s[])
{
    int dem = 0;
    while (s[dem] != '\0')
    {
        dem++;
    }
    return dem;
}

//Chuyển chuỗi SỐ s sang giá trị int.
/*
"1234"
Lần lượt lấy từng ký tự ra rồi đổi sang số
tương ứng

ta thấy kết quã mong muốn là 1234
1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0;
*/
int ATOI(char s[])
{
    int tong = 0;
    int length = STRLEN(s);
    int temp = length;
    // Xác định temp để biết phạm vi mình sẽ duyệt
    for(int i = 0; i < length; i++)
    {
        if(s[i] < '0' || s[i] > '9') // Không phãi là số
        {
            temp = i;
            break;
        }
    }
    // Tính ra kết quã
    int tam = temp;
    for(int i = 0; i < temp; i++)
    {
        tong +=(s[i] - 48) * pow(10.0, --tam); // đổi ký tự sang số rồi nhân cho 10 mũ ...
    }
    return tong;
}

int main()
{
    char str1[100];

    printf("Nhap chuoi: ");
    //scanf("%s",str2);
    gets(str1);  // phải dùng gets
    int x = ATOI(str1);
    printf("\nChuyen ky tu SO %s sang so: %d", str1, x);


    getch();
    return 0;
}