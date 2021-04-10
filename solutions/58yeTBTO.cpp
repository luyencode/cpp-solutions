/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<iostream>
using namespace std;
struct ThiSinh
{
    char MaThiSinh[5];
    char HoTen[30];
    float DiemToan;
    float DiemLy;
    float DiemHoa;
    float DiemTongCong;
};
typedef struct ThiSinh THISINH;

struct Node
{
    THISINH data;
    struct Node *pNext;
};
typedef struct Node NODE;

struct List
{
    NODE *pHead, *pTail;
};
typedef struct List LIST;