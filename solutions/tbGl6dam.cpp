/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define maxN 2048

long findLine(FILE* inFile, char *str)
{
    long count = 0, found = -1; char line[maxN];
    while(fgets(line, maxN - 1, inFile) != NULL)
    {
        if(strncmp(str, line, strlen(str)) == 0)
        {
            found = count;
            break;
        }
        count++;
    }
    return found;
}

void main()
{
    FILE* fp = fopen("Data.txt", "rt");
    char *str = "This is";
    if(fp != NULL)
    {
        long pos = findLine(fp, str);
        if(pos != -1)
        {
            printf("Found at line #%ld\n", pos);
        }
        else
        {
            printf("\n" "%s not found in file...\n", str);
        }
    }

    getch();
}