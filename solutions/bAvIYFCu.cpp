/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* pNext;
};
typedef struct Node NODE;

struct List
{
    NODE *pHead, *pTail;
};
typedef struct List LIST;