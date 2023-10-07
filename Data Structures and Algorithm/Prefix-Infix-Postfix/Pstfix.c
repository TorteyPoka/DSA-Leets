#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int top=-1;
int stack[SIZE];

void push(int val)
{
    if(top==SIZE-1)
    {
        printf("Overflow.\n");
    }
    else{
        top++;
        stack[top]=val;
        printf("%d Pushed\n", stack[top]);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else{
        int dat=stack[top];
        top--;
        printf("%d popped\n", dat);
    }
}
int isOperator(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/' )
    {
        return 1;
    }
    else push(x);
}

char postFix(char n)
{
    int op1,op2,op;

            op1=stack[top];
            pop();
            op2=stack[top];
            pop();

            if(n == '+')
            {
                op=op1+op2;
            }
            else if(n=='-')
            {
                op=op1-op2;
            }
            else if(n=='*')
            {
                op=op1*op2;
            }
            else if(n=='/')
            {
                op=op1/op2;
            }
            push(op);

    return op;
}

int main()
{
    char N;
    int ans=0;

    printf("Please enter elements: ");
    for(int i=0; i<SIZE; i++){
            scanf("%c", &N);
            if(isOperator(N) == 1)
            {
               ans += postFix(N);
            }
    }
    printf("Answer is: %d", ans);

    return 0;
}