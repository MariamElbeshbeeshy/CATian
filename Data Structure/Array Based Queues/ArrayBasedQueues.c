#include "ArrayBasedQueues.h"

void intializeQueue (Queue *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}

void append(QueueEntry *pe, Queue *pq)
{
    //pq->rear= (pq->rear+1) % maxsize;
    if (pq->rear==maxsize-1)
        pq->rear=0;
    else
        pq->rear++;
    pq->entry[pq->rear]=*pe;
    pq->size++;
}

void serve (QueueEntry *pe, Queue *pq)
{
    *pe=pq->entry[pq->front];
    pq->front=(pq->front+1) % maxsize;
    pq->size--;
}

int QueueEmpty (Queue *pq)
{
    return !(pq->size);
}

int QueueFull (Queue *pq)
{
    return (pq->size==maxsize);
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue (Queue *pq)
{
    intializeQueue();
}

void TraverseQueue (Queue *pq, void (*pf)(QueueEntry));
{
    for (int i=pq->front, int flag=0; flag<=size; flag++)
    {
        (*pf)(pq->entry[pq->i]);
        i=(i+1)%maxsize;
    }
}





