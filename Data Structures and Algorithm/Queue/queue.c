#include<stdio.h>

int queue[100],n;
int rear=-1 , front=-1;


int EnQueue(int d)
{
    if(rear==n-1)
    {
        printf("overflow\n");
    }
    else
    {
        rear++;
        printf("%d pushed. \n", d);
        queue[rear]= d;
    }

    return 0;
}

int DeQueue()
{
    int i;
    if(rear==-1)
    {
        printf("underflow\n");
    }
    else
    {
        front++;
        int a;
        a=queue[front];
        for(i=front;i<=rear;i++)
        {
            queue[i]=queue[i+1];
        }
        printf("%d is deleted\n", a);
        rear--;
        front--;
    }
}

int main()
{
    scanf("%d",&n);
    EnQueue(5);
    EnQueue(7);
    EnQueue(3);
    EnQueue(2);
    EnQueue(10);

    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();

    EnQueue(5);
    EnQueue(7);
    EnQueue(3);
    EnQueue(2);
    EnQueue(10);

    DeQueue();
    DeQueue();
    DeQueue();

    return 0;
}
