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

void STRCAT(char s1[], char s2[])
{
    int length1 = STRLEN(s1);
    int size1 = sizeof(s1);

    int length2 = STRLEN(s2);
    for (int i = 0; i < length2; i++)
    {
        s1[length1++] = s2[i];
        if (length1 == size1 - 1)
        {
            break;
        }
    }
    s1[length1] = '\0';
}

void STRCAT_2(char s1[], char s2[])
{
    int i = 0, j = 0;
    while(s1[i] != '\0')
    {
        i++;
    }
    while(s2[j] != '\0'){
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';
}
int main()
{
    char str1[20], str2[20];
    puts("\nNhap chuoi 1: ");
    gets(str1);
    puts("Nhap chuoi 2: ");
    gets(str2);
    printf("\n2 Chuoi truoc khi noi: \n");
    puts(str1);
    puts(str2);
    STRCAT_2(str1, str2);
    printf("\n2 Chuoi sau khi noi: \n");
    puts(str1);

    getch();
    return 0;
}