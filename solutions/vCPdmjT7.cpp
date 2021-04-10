/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<iostream>
using namespace std;
struct Diem
{
    float X;
    float Y;
};
typedef struct Diem DIEM;

struct Node
{
    DIEM data;
    struct Node* pNext;
};
typedef struct node NODE;

struct list
{
    NODE* pHead;
    NODE* pTail;
};
typedef struct list LIST;