#ifndef
#define maxStack 100
#define StackEntry char
#endif

typedef struct stack
{
    StackEntry entry[maxStack];
    int top;
}Stack;

void IntializeStack (Stack *ps);
void push (StackEntry *pe, Stack *ps);
int stackFull (Stack *ps);
void pop (StackEntry *pe, Stack *ps);
int stackEmpty (Stack *ps);
void StackTop(StackEntry *pe, Stack *ps);
int StackSize(*ps);
void clearStack(Stack *ps);
void display(StackEntry e);     //written in user level
void TraverseStack(Stack *ps,void (*pf)(StackEntry ));

