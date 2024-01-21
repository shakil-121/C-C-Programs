#include<stdio.h>
#include<stdlib.h>
struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};

struct ArrayStack *CreateStack()
{
    struct ArrayStack *S=malloc(sizeof(struct ArrayStack));
    if(!S)return NULL;
    S->top=-1;
    S->capacity=6;
    S->array=(int*)malloc(sizeof(int)*S->capacity);
    return S;
}

int IsEmptyStack(struct ArrayStack *S)
{
    return(S->top==-1);
}
int IsFullStack(struct ArrayStack *S)
{
    return(S->top==S->capacity-1);
}
void Push(struct ArrayStack *S,int data)
{
    if(IsFullStack(S))
        printf("Stack Overflow");
    else
        S->array[++S->top]=data;
}


int Top(struct ArrayStack *S)
{
    if(IsEmptyStack(S))
        return -1;
    return S->array[S->top];
}


int Pop(struct ArrayStack *S)
{
    if(IsEmptyStack(S))
    {
        printf("Stack is Empty");
        return 0;
    }
    else
        return(S->array[S->top--]);
}

int main()
{
    struct ArrayStack *S;
    S = CreateStack();
    Push(S,8);
    Push(S,70);
    Push(S,96);
    Push(S,65);
    Push(S,78);
    Push(S,5);
    Pop(S);
    printf("\nThe top value is = %d", Top(S));
}
