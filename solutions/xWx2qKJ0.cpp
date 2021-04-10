/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<iostream>
using namespace std;

//a + i <=> &a[0 + i] ;

//*(a+i) <=> a[i]

void NhapMang(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: \n";
        cin >> *(a + i);
    }
}

void XuatMang(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}

int main()
{
    int *a = NULL;
    int n = 0;
    do{
        cout << "Nhap so luong phan tu:\n";
        cin >> n;
        if(n < 0)
            cout << "So luong la phai >= 0!\n";
    }while(n < 0);
    a = new int[n];    // Xin cấp phát n ô nhớ kiểu int ở vùng nhớ HEAP
    NhapMang(a, n);
    XuatMang(a, n);
    if(a != NULL)
    {
        delete[] a;    // Thu hồi n ô nhớ vừa xin cấp phát trước đó 
    }

    system("pause");
    return 0;
}