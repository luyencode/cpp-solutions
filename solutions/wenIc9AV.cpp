/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int KiemTraFileCoTonTai(char *fname)
{
    FILE* fp = fopen(fname, "rb");
    if(fp == NULL)
    {
        return 0;
    }
    fclose(fp);
    return 1;
}

int KiemTraFileCoDocDuoc(char *fname)
{
    FILE* fp = fopen(fname, "r + b");
    if(fp == NULL)
    {
        return 1;
    }
    fclose(fp);
    return 0;
}
void CheckFile(char *fname)
{
    if(KiemTraFileCoTonTai(fname))
    {
        printf("File %s dang ton tai.\n", fname);
        if(KiemTraFileCoDocDuoc(fname))
        {
            printf("File %s chi co the doc\n", fname);
        }
        else
        {
            printf("File %s co the ghi va doc\n", fname);
        }
    }
    else
    {
        printf("File %s khong tim thay\n", fname);
    }
}
void main()
{
    char* fname[] = {"Result.txt", "Data.txt", "D:\\WELCOME.TXT"};
    CheckFile(fname[0]);
    CheckFile(fname[1]);
    CheckFile(fname[2]);

    getch();
}