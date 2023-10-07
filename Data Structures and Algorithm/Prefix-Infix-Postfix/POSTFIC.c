#include<stdio.h>
#include<string.h>

int rear=-1, front=0, Q[100], n;

void EnQ(int value)
{
    if(rear==n-1)
    {
        printf("Overflow\n");
    }
    else {
        rear++;
        Q[rear] = value;
        printf("Pushed: %d\n", Q[rear]);
    }
} 
void DeQ()
{
    int data;
    if(rear==-1)
    {
        printf("Underflow.\n");
    } 
    else {
        data = Q[front]; 
        front++;
        printf("Popped: %d\n", data);
        for(int i=0; i<rear; i++)
        {
            Q[i] = Q[i+1];
        }
        front--;
        rear--;
    }
}

int main()
{
    scanf("%d", &n);
    
    

    return 0;
}