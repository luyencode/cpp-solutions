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
// strcpy (String Copy) dùng để sao chép toàn bộ ký tự của chuỗi này qua chuỗi khác.
void STRCPY(char s1[], char s2[])  // copy chuoi s2 vao chuoi s1
{
    int i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void STRCPY_2(char s1[], char s2[])
{
    int length = STRLEN(s2);
    for (int i = 0; i < length; i++)
    {
        s1[i] = s2[i];
    }
    s1[length] = '\0';
}
int main()
{
    char str1[100], str2[100];

    printf("Nhap chuoi: ");
    //scanf("%s",str2);
    gets(str2);  // phải dùng gets
    STRCPY_2(str1,str2);
    printf("Chuoi sau khi nhap: %s",str1);
 
    
    getch();
    return 0;
}