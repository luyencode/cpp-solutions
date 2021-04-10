/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int STRLEN(char s[])
{
    int count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    return count;
}

void STRLWR(char s[])
{
    int length = STRLEN(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
}
int main()
{
    char str1[100];

    printf("Nhap chuoi: ");
    //scanf("%s",str2);
    gets(str1);  // phải dùng gets
    STRLWR(str1);
    printf("\nDoi chu hoa thanh chu thuong: %s", str1);


    getch();
    return 0;
}