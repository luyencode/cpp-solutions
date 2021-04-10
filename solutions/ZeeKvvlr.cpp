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
int ATOI(char *s)
{
    // "1234"
    int tong = 0;

    int length = STRLEN(s);
    int Temp = length;
    // Xác định temp để biết phạm vi mình sẽ duyệt
    for (int i = 0; i < length; i++)
    {
        if (s[i] < '0' || s[i] > '9') // Không phãi là số
        {
            Temp = i;
            break;
        }
    }
    // Tính ra kết quã
    int Temp1 = Temp;
    for (int i = 0; i < Temp; i++)
    {
        
        tong +=(s[i] - 48) * pow(10.0, --Temp1); // đổi ký tự sang số rồi nhân cho 10 mũ ...
    }
    return tong;
}
double ATOF(char s[])
{
    char phannguyen[30];
    char phanle[30];
    int idx = 0;
    int length = STRLEN(s);
    bool Check = true;

    for(int i = 0; i < length; i++)
    {
        if(Check == true)
        {
            phannguyen[idx++] = s[i];
        }
        else
        {
            phanle[idx++] = s[i];
        }
        if(s[i] == '.')
        {
            Check = false;
            idx = 0;
        }
    }
    return ATOI(phannguyen) + ATOI(phanle)    / pow(10.0, idx);
}
int main()
{
    char str1[100];
     printf("Nhap chuoi: ");
    //scanf("%s",str2);
    gets(str1);  // phải dùng gets

    double y = ATOF(str1);

    printf("\nDoi chuoi %s sang so: %lf", str1, y);

    getch();
    return 0;
}