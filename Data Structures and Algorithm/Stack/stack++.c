#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 7 
int count=0;

struct stack{
    int items[SIZE];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s){
    s->top=-1;
}

// bool isFull(st *s){
//     if(s->top = SIZE-1){
//      return true;
//     }
//     else
//      return false;
// }

bool isEmpty(st *s){
    if(s->top=-1){
        return true;
    }
    else{
        return false;
    }
        
}

void push(st *s){
    if(s->top = SIZE-1){
        printf("Overflow;\n");
    }
    else
    {
        int newItem;
        s->top++;
        printf("\nEnter data to insert: ");
        scanf("%d", &newItem);
        s->items[s->top] = newItem;
    }
    count ++;
}

void pop(st *s){
    if(isEmpty(s)){
        printf("Underflow!\n");
    }
    else{
        printf("Data popped: %d", s->items[s->top]);
        s->top--;
    }
}

void printStack(st *s){
    for(int i=0; i<count; i++){
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main()
{
    int n=SIZE;
    int choice;
    st *s=(st *)malloc(sizeof(st));

    createEmptyStack(s);

    while(n!=0){
        printf("\n1.Push\n2.Pop\n3.Print\n4.Exiiiiiit\n");
        printf("Choose an action: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: push(s);
                break;
        case 2: pop(s);
                break;
        case 3: printStack(s);
                break;
        case 4: exit(0);
        
        default: printf("Wrong option!\n");
            break;
        }
        n--;
    }

    
}