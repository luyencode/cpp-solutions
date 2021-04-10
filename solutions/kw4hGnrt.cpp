/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include <iostream>
using namespace std;

void InterchangeSort(int* a, int x, int y)
{
    for(int i = x; i < y - 1; i++)
    {
        for(int j = i + 1; j < y; j++)
        {
            if(a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}

void XuatMang(int* a, int n)
{
    for(int i = 0; i < n; i++)
        cout << i[a] << "\t";
}

void LietKeHoanVi(int* a, int n)
{
    XuatMang(a, n);
    cout << endl;
    while(true)
    {
        bool check = false;
        for(int i = n - 1; i > 0; i--)
        {
            if(a[i - 1]  < a[i])
            {
                InterchangeSort(a, i, n );
                for(int j = i; j < n; j++)
                {
                    if(a[j] > a[i - 1])
                    {
                        swap(a[j], a[i - 1]);
                        break;
                    }
                }
                check = true;
                break;
            }
        }

        if(check == false)
            break;
        XuatMang(a, n);
        cout << endl;
    }
}
int main()
{
    int n = 5;
    int* a = new int [n];
    for(int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    LietKeHoanVi(a, n);
    system("pause");
    delete []a;
}