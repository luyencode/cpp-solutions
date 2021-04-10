/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

struct phanso
{
    int tu;
    int mau;
};
typedef struct phanso PHANSO;

struct node
{
    PHANSO Info;
    struct node* pNext;
};
typedef struct node NODE;

struct list
{
    NODE* pHead;
    NODE* pTail;
};
typedef struct list LIST;