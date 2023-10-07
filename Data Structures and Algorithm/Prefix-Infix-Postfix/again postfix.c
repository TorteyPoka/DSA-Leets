#include<stdio.h>
#include<stdlib.h>

int top=-1;
int stack[100],num;
int op, op1, op2;

void push(int val)
{
    if(top==num-1)
    {
        printf("Overflow\n");
    }
    else{
        top++;
        stack[top]=val;
        printf("%d Has been inserted\n", stack[top]);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else{
        int data=stack[top];
        top--;
        printf("%d removed\n", data);
    }
}
int translate(char tr)
{
    int val, value;
    value = tr;
    return val=value-'0';
}
int isOperator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
    {
        return 1;
    }
    else return -1;
}
int isOperand(char cch)
{
    if(cch>='0' && cch<='9')
    {
        return 1;
    }
    else return -1;
}
unsigned int postFix(char *n[])
{
    for(int i=0; i<num; i++){

    if(isOperator(n[i])==1)
    {
        op1=stack[top];
        pop();
        op2=stack[top];
        pop();
        if(n[i]=='+')
        {
            return op=op1+op2;
        }
        else if(n[i]=='-')
        {
            return op=op1-op2;
        }
        else if(n[i]=='*')
        {
            return op=op1*op2;
        }
        else if(n[i]=='/')
        {
            return op=op1/op2;
        }
        else printf("Wrong entry\n");

        push(op);
    }
    else if(isOperand(n[i])==1) 
        {
        push(translate(n[i]));
        }
    }
    return stack[top];
}
int main()
{
    int *p;
    scanf("%d", &num);
    char s[num];

    int data_c=num;
    for(int i=1; i<num; i++)
    {
        scanf("%s", &s[i]);
        *p = &s[i];
        postFix(*p);
    }
    
    printf("%d", postFix(*p));

    return 0;
}