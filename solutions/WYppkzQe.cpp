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
    int info;
    struct node *pLeft;
    struct node *pRight;
};
typedef struct node NODE;

typedef NODE *TREE;

int demNut(TREE t)
{
    if(t == NULL)
        return 0;
    return (1 + demNut(t->pLeft) + demNut(t->pRight));

}