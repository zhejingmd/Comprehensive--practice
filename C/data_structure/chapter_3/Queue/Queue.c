#include <stdio.h>
#include "Queue.h"

struct QueueRecord
{
    int Capacity;
    int Front;
    int Rear;
    int Size;
    ElementType *Array;
};

int IsEmpty(Queue Q)
{
    return Q->Size == 0;
}

void MakeEmpty(Queue Q)
{
    Q->Size = 0;
    Q->Front = 1;
    Q->Rear = 0;
}

int IsFull(Queue Q)
{
    return Q->Size == Q->Capacity;
}

static int Succ(int value, Queue Q)
{
    if (++value == Q->Capacity)
        value = 0;
    return value;
}

void Enqueue(ElementType X, Queue Q)
{
    if (IsFull(Q))
        Error("Full queue");
    else
    {
        Q->Size++;
        Q->Rear = Succ(Q->Rear, Q);
        Q->Array[Q->Rear] = X;
    }
}