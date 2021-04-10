/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int STRLEN(char s[])
{
    int count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    return count;
}

int STRICMP(char s1[], char s2[])
{
    /*STRLWR(s1);
    STRLWR(s2);
    return STRCMP(s1, s2);*/
    int length1 = STRLEN(s1);
    int length2 = STRLEN(s2);

    int lengthMin = (length1 < length2) ? length1 : length2;
    for(int i = 0; i < lengthMin; i++)
    {
        char temp1 = s1[i];
        char temp2 = s2[i];

        // Quy hết tất cả về ký tự thường
        if(temp1 >= 'A' && temp1 <= 'Z')
        {
            temp1 += 32;
        }
        if(temp2 >= 'A' && temp2 <= 'Z')
        {
            temp2 += 32;
        }

        if( temp1 < temp2)
        {
            return -1;
        }
        else if(temp1 > temp2)
        {
            return 1;
        }
    }
    if (length1 > length2)
    {
        return 1;
    }
    else if (length1 < length2)
    {
        return -1;
    }
    return 0;
}

int main()
{
    char s1[] = "abc";
    char s2[] = "Abc";

    int kq = STRICMP(s1,s2);
    printf("\nKq = %d",kq);

    getch();
    return 0;
}