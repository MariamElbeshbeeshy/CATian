#include <stdio.h>
#include <stdlib.h>
#include <Contiguous Stack.h>

void IntializeStack (Stack *ps)
{
    ps->top=0;
}

//preconditions stack is initialized and not full
void push (StackEntry *pe, Stack *ps)
{
    ps->entry[ps->top]=*e;
    ps->top++;
}

int stackFull (Stack *ps)
{
    //return ps->top >= maxStack;
    if (ps->top>=maxStack)
        return 1;
    else
        return 0;
}

void pop (StackEntry *pe, Stack *ps)
{
    //*pe=ps->entry[--ps->top];
    ps->top--;
    *pe=ps->entry[ps->top];
}

int stackEmpty (Stack *ps)
{
    //return !ps->top;
    if (ps->top>=0)
        return 1;
    else
        return 0;
}

void StackTop(StackEntry *pe, Stack *ps)
{
    *pe=ps->entry[ps->top-1];
}

int StackSize(Stack *ps)
{
    return ps->top;
}

void clearStack(Stack *ps)
{
    ps->top=0;
}

void display(StackEntry e)
{
    printf("element is %[] ",e);
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry ))
{
    for(int i=ps->top-1; i>=0; i--)
        (*pf)(ps->entry[i]);
}


