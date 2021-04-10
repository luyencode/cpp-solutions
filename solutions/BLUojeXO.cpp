/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
double minPair(double a[], int n, int& Idi, int& Idj)
{
    double dmin = -1; int i, j, d;
    Idi = Idj = -1; j = n;
    while(--j)
    {
        i = j;
        while(i--)
        {
            if(a[i] != a[j])
            {
                d = fabs(a[i] - a[j]);
                if(dmin == -1 || dmin > 0)
                {
                    dmin = d;
                    Idi = i; Idj = j;
                }
            }
        }
    }
    return dmin;
}
#define maxSzArray 10240
typedef double MyArray[maxSzArray];

void getArray(FILE* fp, MyArray a, int&n)
{
    double x;
    n = 0;
    while(fscanf(fp, "%lf", &x) > 0)
    {
        a[n] = x; n++;
        if(n >= maxSzArray)
            break;
    }
}

double findMinXY(FILE* fp, double&x, double& y)
{
    MyArray a; double d;
    int n, i, j;
    getArray(fp, a, n);
    x = y = 0;
    d = minPair(a, n, i, j);
    if(d != -1)
    {
        x = a[i];
        y = a[j];
    }
    return d;
}

void main()
{
    double d, x, y;
    FILE* fp = fopen("NumData.txt", "rt");
    if(fp != NULL)
    {
        d = findMinXY(fp, x, y);
        if(d != -1)
        {
            printf("|(%lf) - (%lf)| = %lf\n", x, y, d);
        }
        fclose(fp);
    }

    getch();
}