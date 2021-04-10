/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

/*

*/
int StringLength(char s[])
{
    int i = 0; 
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

int STRLEN(char *s)
{
    int dem = 0;
    while(s[dem] != '\0')
    {
        dem++;
    }
    return dem;    
}
int main()
{
    char s[] = "Hello World";
    int length = StringLength(s);
    printf("\nDo dai cua chuoi s la: %d", length);

    int len = STRLEN(s);
    printf("\nDo dai cua chuoi s la: %d", len);

    getch();
    return 0;
}