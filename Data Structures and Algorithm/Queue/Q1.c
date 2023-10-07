#include<stdio.h>

#define SIZE size()

int front = 0;
int rear = -1;
queue[SIZE];

int size()
{
    int s;
    scanf("%d", &s);
    return s;
}

void EnQ(int data)
{
    if(rear==size)
    {
        printf("Overflow\n");
    }
    else{
        rear++;
        queue[rear] = data;
        printf("%d pushed\n", queue[rear]);
    }
    printf(" \n");
}
void DeQ()
{
    if(rear==-1)
    {
        printf("Underflow\n");
    }
    else{
        int data = queue[front];
        printf("%d popped\n", data);
        front++;
        rear--;
    }
    printf(" \n");
}

int main()
{
    int globalSize;
    scanf("%d", &globalSize);
    size=globalSize;
    EnQ(11);
    EnQ(12);
    EnQ(13);
    EnQ(14);
    EnQ(15);
    DeQ();
    DeQ();
    EnQ(17);
    DeQ();
    EnQ(19);
    EnQ(20);
    EnQ(21);
    DeQ();
    DeQ();
    DeQ();
    DeQ();

}