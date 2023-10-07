#include<stdio.h>
#include<stdlib.h>

int top=-1, stack[100], N;

void push(int data)
{
    if(top==N-1){
        printf("\nOverFlow;\n");
    }
    else{
        top++;
        stack[top] = data;
        printf("___Data insertion successful!\n");
    }
}

void pop()
{
    if(top==-1){
        printf("\nUnderFlow;\n");
    }
    else{
        printf("___Data popped: %d\n", stack[top]);
        top--;
    }   
}

void peek()
{
    printf("___Peek position: %d\n", top);
    if(stack[top]==0){
        printf("___Peek value: NULL");
    }
    else
    printf("___Peek value: %d\n", stack[top]);
}

void printStack()
{
    if(top==-1){
        printf("\n__Null__\n");
    }
    printf("Stored Data: ");
    for(int i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n---------");
    printf("\n");
}

int main()
{
    int n;
    int opt, data;
    
    printf("Enter the stack size: ");
    scanf("%d", &N);

    while(n--){

        printf(" \n");
        printf("Choose an option between:\n1.Insert.\n2.Delete.\n3.Display.\n4.Check peek.\n5.Exiiit\n");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:  printf("Enter the data: ");
                     scanf("%d", &data);
                     push(data); 
                     break;
            case 2: pop(); break;
            case 3: printStack(); break;
            case 4: peek(); break;
            case 5: exit(0);

            default:
            printf("!!Please choose between options!!");
            break;
        }
    }
    return 0;
}