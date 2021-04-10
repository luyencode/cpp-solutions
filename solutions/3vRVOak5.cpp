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

void HoanVi(char &a, char &b)
{
    char Temp = a;
    a = b;
    b = Temp;
}

void STRREV(char s[])
{
    int length = STRLEN(s);
    for (int i = 0; i < length / 2; i++)
    {
        HoanVi(s[i], s[length - 1 - i]);
    }
}
int main()
{
    char str1[100];

    printf("Nhap chuoi: ");
    //scanf("%s",str2);
    gets(str1);  // phải dùng gets
    STRREV(str1);
    printf("\nDao chuoi: %s", str1);


    getch();
    return 0;
}