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

// SUBSTR(s, x, y) // Cắt chuỗi con trong đoạn [x, y] của chuỗi s

char* SUBSTR(char s[], int x, int y)
{
    char ketqua[100];
    int length = STRLEN(s);
    int idx = 0;
    for(int i = x; i <= y; i++)
    {
        ketqua[idx++] = s[i];
    }
    ketqua[idx] = '\0'; // Kết thúc chuỗi
    return ketqua;
}
int main()
{
    char s[] = "Vuong Tri Tai";
    char sub[100];
    strcpy(sub, SUBSTR(s, 10, 12));

    printf("\nsub = %s", sub);

    getch();
    return 0;
}