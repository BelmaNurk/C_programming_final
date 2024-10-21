#include <stdio.h>
#include <stdbool.h>

#define max_size 100

typedef struct
{
    int items[max_size];
    int front;
    int back;
    int size=0;
} Queue;

void initializeQueue(Queue* q){
    q->front=-1;
    q->back=0;
    q->size=0;

}

bool isEmpty(Queue* q){
    return q->size==0;
}

bool isFull(Queue* q){
    return q->size==max_size;
}

void enQueue(Queue* q, int value){
    if(isFull(q)){
        printf("Queue is full!\n");
        return;
    }
    q->items[q->back]=value;
    q->back++;
    q->size++;
}

void deQueue(Queue* q){
    if(isEmpty(q)){
        printf("Queue is empty.\n");
    }
    q->front++;
    q->size--;

}

int getFirstElement(Queue* q){
    return q->items[0];
}

int getLastElement(Queue* q){
    return q->items[q->size-1];
}
void printQueue(Queue* q){
    for(int i=0; i<q->size; i++){
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

void printSize(Queue* q){
    printf("Size of Queue is: %d.\n", q->size);
}


int main()
{
    Queue firstQueue;
    initializeQueue(&firstQueue);
    enQueue(&firstQueue, 4);
    enQueue(&firstQueue, 5);
    enQueue(&firstQueue, 6);
    enQueue(&firstQueue, 7);

    printQueue(&firstQueue);
    printSize(&firstQueue);

    printf("Last element in queue: %d.\n", getLastElement(&firstQueue));
    

    return 0;
}

/* Applications of queue 
1. CPU scheduling
2. Print spooling
3. Web servers to schedule incoming requests
4. Buffering I/O systems
*/