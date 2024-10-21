#include<stdio.h>
#include<stdbool.h>

#define max_size 100

typedef struct {
    int items[max_size];
    int front=-1;
    int size=0;
} Stack;

void initializeStack(Stack* s){
    s->front=-1;
    s->size=0;
}

bool isEmpty(Stack* s){
    return s->size==0;
}

bool isFull(Stack* s){
    return s->size==max_size;
}

void enStack(Stack* s, int value){
    if(isFull(s)){
        printf("Stack is full.\n");
        return;
    }
    s->items[s->size]=value;
    s->size++;
    s->front++;

}

void deStack(Stack* s){
    if(isEmpty(s)){
        printf("Stack is empty.\n");
        return;
    }
    s->front--;
    s->size--;
}

int getTopElement(Stack* s){
    return s->items[s->front];
}

void printStack(Stack* s){
    for(int i=s->size-1; i>=0; i--){
        printf("%d ", s->items[i]);
    }
    printf("\n");
}
int main(){
    Stack firstStack;
    initializeStack(&firstStack);
    enStack(&firstStack, 4);
    enStack(&firstStack, 5);
    enStack(&firstStack, 6);
    enStack(&firstStack, 7);

    printStack(&firstStack);
    deStack(&firstStack);
    deStack(&firstStack);
    printStack(&firstStack);


    
    
    return 0;
}

