/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

struct node
{
    int info;
    struct node *pNext;
    struct node *pPrev;
};
typedef struct node NODE;

typedef NODE *TREE;