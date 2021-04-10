/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

struct node
{
    int Info;
    struct node* pNext;
};
typedef struct node NODE;

typedef struct list
{
    NODE* pHead;
    NODE* pTail;
};
typedef struct list LIST;

void Init(LIST& L);
NODE* getNode(int x);
void addHead(LIST& L, NODE* new_ele);
void Input(LIST& L);
void Output(LIST L);
long Sum(LIST L);

void Init(LIST& L)
{
    L.pHead = NULL;
    L.pTail = NULL;
}

NODE* getNode(int x)
{
    NODE* p;
    p = new NODE;
    if(p == NULL)
        return NULL;

    p->Info = x;
    p->pNext = NULL;

    return p;
}

void addHead(LIST& L, NODE* new_ele)
{
    if(L.pHead == NULL)
    {
        L.pHead = new_ele;
        L.pTail = L.pHead;
    }
    else
    {
        new_ele->pNext = L.pHead;
        L.pHead = new_ele;
    }
}

void Input(LIST& L)
{
    int n;
    printf("\nNhap so luong node: ");
    scanf("%d", &n);

    Init(L);
    for(int i = 1; i <= n; i++)
    {
        int x;
        printf("\nNhap 1 so nguyen: ");
        scanf("%d", &x);
        NODE* p = getNode(x);
        addHead(L, p);
    }
}

void Output(LIST L)
{
    for(NODE* p = L.pHead; p != NULL; p = p->pNext)
    {
        printf("%4d", p->Info);
    }
}

long Sum(LIST L)
{
    long s = 0;
    for(NODE*p = L.pHead; p != NULL; p = p->pNext)
    {
        s = s + p->Info;
    }
    return s;
}
int main()
{
    LIST lst;
    Input(lst);
    Output(lst);
    long kq = Sum(lst);
    printf("\nTong cac node: %ld", kq);

    getch();
    return 0;
}