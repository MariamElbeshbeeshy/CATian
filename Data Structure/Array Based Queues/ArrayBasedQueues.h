typedef struct queue
{
    int front;
    int rear;
    int size;
    QueueEntry entry[maxsize];
}Queue;

void intializeQueue (Queue *pq);
void append(QueueEntry *pe, Queue *pq);
void serve (QueueEntry *pe, Queue *pq);
int QueueEmpty (Queue *pq);
int QueueFull (Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue (Queue *pq);
void TraverseQueue (Queue *pq, void (*pf)(QueueEntry));
