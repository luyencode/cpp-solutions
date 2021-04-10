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

int STRCMP(char s1[], char s2[])
{
    int length1 = STRLEN(s1);
    int length2 = STRLEN(s2);

    int lengthMin = (length1 < length2) ? length1 : length2;
    for(int i = 0; i < lengthMin; i++)
    {
        if(s1[i] < s2[i])
        {
            return -1;
        }
        else if(s1[i] > s2[i])
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
    char s2[] = "abcd";

    int kq = STRCMP(s1,s2);
    printf("\nKq = %d",kq);

    getch();
    return 0;
}