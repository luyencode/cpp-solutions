/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include <iostream>
using namespace std;

void CapPhat(int**& a, int sodong, int socot)
{
    a = new int* [sodong];
    for(int i = 0; i < sodong; i++)
    {
        a[i] = new int[socot];
    }
}

void NhapMang(int** a, int sodong, int socot)
{
    for(int i = 0; i < sodong; i++)
    {
        for(int j = 0; j < socot; j++)
        {
            cout<<"Nhap vao a["<<i<<"]["<<j<<"]:\n";
            cin>>a[i][j];
        }
    }
}

void XuatMang(int** a, int sodong, int socot)
{
    for(int i = 0; i < sodong; i++)
    {
        for(int j = 0; j < socot; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void ThuHoi(int*** a, int sodong)
{
    for(int i = 0; i < sodong; i++)
    {
        delete (*a)[i]; 
    }
    delete [](*a);
}

void XoaDong(int**&a, int& sodong, int socot, int vitrixoa)
{
    for(int i = vitrixoa; i < sodong - 1; i++)
    {
        for(int j = 0; j < socot; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }
    delete[]a[sodong - 1];
    sodong--;
    // Dùng realloc để resize ô nhớ đã cấp phát
    a = (int**) realloc(a, sodong * sizeof(int));
}

void XoaCot(int**& a, int sodong, int& socot, int vitrixoa)
{
    for(int i = 0; i < sodong ; i++)
    {
        for(int j = vitrixoa; j < socot - 1; j++)
        {
            a[i][j] = a[i][j + 1];
        }
    }
    socot--;
    for(int i = 0; i < sodong; i++)
    {
        a[i] = (int*)realloc(a[i], socot * sizeof(int));
    }
}

void ThemDong(int**& a, int& sodong, int socot, int* dongcanthem, int vitrithem)
{
    sodong++;
    a = (int**)realloc(a, sodong * sizeof(int));
    a[sodong - 1] = new int[socot];

    for(int i = sodong - 1; i > vitrithem; i--)
    {
        for(int j = 0; j  < socot; j++)
        {
            // Di dời các phần tử 
            a[i][j] = a[i - 1][j];
        }
    }
    // Gán vào vị trí thích hợp
    for(int j = 0; j < socot; j++)
    {
        a[vitrithem][j] = dongcanthem[j];
    }
}
void ThemCot(int**& a, int sodong, int& socot, int* cotcanthem, int vitrithem)
{
    socot++;
    for(int i = 0; i < sodong; i++)
    {
        a[i] = (int*)realloc(a[i], socot * sizeof(int));
    }

    // Thực hiện di dời
    for(int i = 0; i < sodong; i++)
    {
        for(int j = socot - 1; j > vitrithem; j--)
        {
            a[i][j] = a[i][j - 1];
        }
    }
    // Gán vào vị trí thích hợp
    for(int i = 0; i < sodong; i++)
    {
        a[i][vitrithem] = cotcanthem[i];
    }
}
int main()
{
    int sodong = 3, socot = 3;
    int** a = NULL;
    CapPhat(a, sodong, socot);
    NhapMang(a, sodong, socot);
    XuatMang(a, sodong, socot);


    /* Thêm dòng */
    int* dongcanthem = new int[socot];
    int vitrithem = 2;
    for(int i = 0; i < socot; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 <<endl;
        cin >> dongcanthem[i];
    }
    ThemDong(a, sodong, socot, dongcanthem, vitrithem);
    cout<<endl;
    cout << "Ma tran sau khi them dong 2";
    XuatMang(a, sodong, socot);
    /* Thêm cột */
    int* cotcanthem = new int[sodong];
    vitrithem = 1;
    for(int i = 0; i < sodong; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << endl;
        cin>>cotcanthem[i];
    }
    ThemCot(a, sodong, socot, cotcanthem, vitrithem);
    cout << endl;
    cout << "Ma tran sau khi them cot 2";
    XuatMang(a, sodong, socot);
    if(a != NULL)
    {
        ThuHoi(&a, sodong);
    }

    system("pause");
    return 0;
}