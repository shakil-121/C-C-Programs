#include<stdio.h>
#include<stdlib.h>
struct ArrayQueue{
    int front,rear;
    int capacity;
    int *array;
};

struct ArrayQueue *Q;
struct ArrayQueue *Queue(int size)
{
    struct ArrayQueue *Q = malloc(sizeof(struct ArrayQueue));
    if(!Q) return NULL;
    Q->capacity=size;
    Q->front=Q->rear=-1;
    Q->array = malloc(Q->capacity*sizeof(int));
    if(!Q->array)
        return NULL;
    return Q;
}

int IsEmptyQueue(struct ArrayQueue *Q)
{
    return(Q->front == -1);
}

int IsFullQueue(struct ArrayQueue *Q)
{

    return((Q->rear+1)% Q->capacity==Q->front);
}
int QueueSize()
{

    return(Q->capacity - Q->front +Q->rear +1) % Q->capacity;
}

void EnQueue(struct ArrayQueue *Q, int data)
{
    if(IsFullQueue(Q))
        printf("Queue Overflow");
    else
    {
        Q->rear=(Q->rear+1)%Q->capacity;
        Q->array[Q->rear]=data;
        if(Q->front==-1)
            Q->front=Q->rear;
    }
}

int DeQueue(struct ArrayQueue *Q)
{
    int data = 0;
    if(IsEmptyQueue(Q))
    {
        printf("Queue is Empty");
        return 0;
    }
    else
    {
        data = Q->array[Q->front];
        if(Q->front==Q->rear)
            Q->front=Q->rear = -1;
        else
            Q->front=(Q->front+1)% Q->capacity;
    }
    return data;
}
void display(struct ArrayQueue *Q)
{
    int i;
    if(Q->rear==-1)
    printf("Queue is Empty");
    else
    {
        printf("The Queue is= ");
        for(i=Q->rear;i>=Q->front;i--)
        {
            printf("\t%d",Q->array[i]);
        }
    }
}

int main()
{
    struct ArrayQueue *Q;
    int size,data,c;
    printf("option");

    printf("\n 1.EnQueue");
    printf("\n 2.DeQueue");
    printf("\n 3.Display");
    printf("\n 4.Exit\n");
    printf("Please Enter the size of your Queue");
    scanf("%d",&size);
    Q = Queue(size);

    while(1)
    {
        printf("\n Please choose any option");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                printf("Please Enter the data");
                scanf("%d",&data);
                EnQueue(Q,data);
                break;
            }

            case 2:
            {
                data=DeQueue(Q);
                if(data!=0)
                free(data);
                break;
            }
            case 3:
            {
                display(Q);
                break;
            }

            case 4:
            {
                exit(0);
                break;
            }
            default:
                printf("Worng opition");

        }
    }
    return 0;
}
