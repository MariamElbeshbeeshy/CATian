void intializeQueue (Queue *pq)
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}

int append(QueueEntry *pe, Queue *pq)
{
    QueueNode *pn=(QueueNode*) malloc(sizeof(QueueNode));
    if (!pn)
        return 0;
    else
    {
        pn->entry=*pe;
        pn->next=NULL;
        if (!pq->size)
            pq->front=pn;
        else
            pq->rear->next=pn;
        pq->rear=pn;
        pq->size++;
        return 1;
    }
}

void serve (QueueEntry *pe, Queue *pq)
{
    QueueNode *pn;
    pn=pq->front;
    if(!pq->front->next)
        pq->rear=NULL;
    *pe=pq->front->entry;
    pq->front=pq->front->next;
    free(pn);
    pq->size--;
}

int QueueEmpty (Queue *pq)
{
    return !pq->size;
}

int QueueFull (Queue *pq)
{
    return 0;
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue (Queue *pq)
{
    QueueNode *pn;
    while (pq->front)
    {
        pq->front=pq->front->next
        free(pn);
        pn=pq->front;
    }
    pq->rear=NULL;
    pq->size=0;
}

void TraverseQueue (Queue *pq, void (*pf)(QueueEntry))
{
    for (QueueNode *pn=pq->front; pn; pn=pn->next)
        (*pf)(pn->entry);
}





