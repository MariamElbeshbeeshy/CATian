typedef struct queuenode
{
    QueueEntry entry;
    struct queuenode *next;
}QueueNode;

typedef struct queue
{
    QueueNode *rear;
    QueueNode *front;
    int size;
}Queue;


void intializeQueue (Queue *pq);
int append(QueueEntry *pe, Queue *pq);
void serve (QueueEntry *pe, Queue *pq);
int QueueEmpty (Queue *pq);
int QueueFull (Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue (Queue *pq);
void TraverseQueue (Queue *pq, void (*pf)(QueueEntry));
