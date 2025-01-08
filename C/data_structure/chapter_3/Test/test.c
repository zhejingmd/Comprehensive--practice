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

// ��� P ���б� L �е����һ��λ�ã��򷵻���
int IsLast(Position P, List L)      // �����ʵ���У����� L û�б�ʹ��
{
    return P->Next == NULL;
}

// ���� x ���б� l �е�λ�ã����û�ҵ��򷵻� null
Position Find(ElementType X, List L)
{
    Position P;

    P = L->Next;
    while (P != NULL && P->Element != X)
        P = P->Next;

    return P;
}

// ���б���ɾ����һ�γ��ֵ� X
void Delete(ElementType X, List L)
{
    Position P, TmpCell;

    P = FindPrevious(X, L);

    if(!IsLast(P, L))   // ������ͷ���
    {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;    // ������ɾ���Ľ��
        free(TmpCell);
    }
}

// ���� X ��ǰһ�����
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