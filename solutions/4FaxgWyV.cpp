/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

void NhapMangTuFile(char TenFile[], int &n, int a[])
{
    FILE* f;   
    f = fopen(TenFile, "r");
    if(f == NULL)
    {
        printf("\nKhong doc duoc file");
        fclose(f);
        return;
    }

    fscanf(f, "%d", &n);
    for(int i = 0; i < n; i++)
    {
        fscanf(f, "%d", &a[i]);
    }
    fclose(f);
}

void XuatMang(int n, int a[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
}

void XuatMangRaFile(char TenFile[], int n, int a[])
{
    FILE* f;  f = fopen(TenFile, "w");
    if(f == NULL)
    {
        printf("\nKhong tao duoc file\n");
        fclose(f);
        return;
    }
    for(int i = 0; i < n; i++)
    {
        fprintf(f, "%4d", a[i]);
    }
    fclose(f);
}
int main()
{
    int n;
    int a[100];

    NhapMangTuFile("input.txt", n, a);
    printf("\nMang da nhap");
    XuatMangRaFile("output.txt", n, a);

    getch();
    return 0;
}