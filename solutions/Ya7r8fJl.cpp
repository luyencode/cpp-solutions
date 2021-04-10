/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<iostream>
using namespace std;
struct HocSinh
{
    char HoTen[30];
    float DiemToan;
    float DiemVan;
    float DiemTrungBinh;
};
typedef struct HocSinh HOCSINH;

struct Node
{
    HOCSINH data;
    struct Node *pNext;
};
typedef struct Node NODE;

struct List
{
    NODE *pHead, *pTail;
};
typedef struct List LIST;