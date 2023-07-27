#include <stdio.h>
#include <stdlib.h>
#include <LinkedList.h>

void IntializeStack (Stack *ps)
{
    ps->top=NULL;
}

void push (StackEntry *pe, Stack *ps)
{
    StackNode* pn=(StackNode*)malloc(sizeof(StackNode));
    pn->entry=*pe;
    pn->next=ps->top;
    ps->top=pn;
}

void pop (StackEntry *pe, Stack *ps)
{
    StackNode* pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
}

int stackEmpty (Stack *ps)
{
    return ps->top==NULL;
}

int stackFull (Stack *ps)
{
    return 0;
}

void clearStack(Stack *ps)
{
    StackNode* pn, *qn;
    pn=ps->top;
    qn=qn->top;
    while(qn!=NULL)
    {
        qn=qn->next;
        free(pn);
        pn=qn;
    }
    ps->top=NULL;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry ))
{
    StackNode *pn;
    pn=ps->top;
    while(pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;
    }
}

int StackSize(*ps)
{
    int x=0;
    for(StackNode *pn; pn; pn=pn->next)
        x++;
    return x;
}






