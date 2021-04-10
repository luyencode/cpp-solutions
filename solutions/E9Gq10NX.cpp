/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<iostream>
using namespace std;
struct Phong
{
    char MaPhong[5];
    char TenPhong[30];
    float DonGiaThue;
    int SoLuongGiuong;
    bool TinhTrangGiuong;
};
typedef struct Phong PHONG;

struct Node
{
    PHONG data;
    struct Node *pNext;
};
typedef struct Node NODE;

struct List
{
    NODE *pHead, *pTail;
};
typedef struct List LIST;