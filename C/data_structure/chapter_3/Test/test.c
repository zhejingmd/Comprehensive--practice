#include <stdio.h>
#include <stdlib.h>
#include "..\Stack\Linked_List.h"

struct Node
{
    ElementType Element;
    Position Next;
};

int IsEmpty(List L)
{
    return L->Next == NULL;
}

// 如果 P 是列表 L 中的最后一个位置，则返回真
int IsLast(Position P, List L)      // 在这个实现中，参数 L 没有被使用
{
    return P->Next == NULL;
}

// 返回 x 在列表 l 中的位置，如果没找到则返回 null
Position Find(ElementType X, List L)
{
    Position P;

    P = L->Next;
    while (P != NULL && P->Element != X)
        P = P->Next;

    return P;
}

// 从列表中删除第一次出现的 X
void Delete(ElementType X, List L)
{
    Position P, TmpCell;

    P = FindPrevious(X, L);

    if(!IsLast(P, L))   // 假设有头结点
    {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;    // 跳过被删除的结点
        free(TmpCell);
    }
}

// 查找 X 的前一个结点
Position FindPrevious(ElementType X, List L)
{
    Position P;

    P = L;
    while (P->Next != NULL && P->Next->Element != X)
        P = P->Next;
    
    return P;
}


void Insert(ElementType X, List L, Position P)
{
    Position Tmpcell;

    Tmpcell = malloc( sizeof(struct Node));
    if(Tmpcell == NULL)
        printf("Out of space !!!");
        exit(0);
    
    Tmpcell->Element = X;
    Tmpcell->Next = P->Next;
    P->Next = Tmpcell;
}

void DeleteList(List L)
{
    Position P, Tmp;

    P = L->Next;
    L->Next = NULL;
    while (P != NULL)
    {
        Tmp = P->Next;
        free(P);
        P = Tmp;
    }
}

int main()
{
    return 0;
}