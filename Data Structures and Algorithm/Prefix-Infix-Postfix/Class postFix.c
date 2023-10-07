#include<stdio.h>

int top=-1;
int stack[100], n;

void push(int val)

{
    if(top==n-1)
    {
        printf("Overflow.\n");
    }
    else {
        top++;
        stack[top] = val;
    }
}

int pop()
{
     int value;
    if(top==-1)
    {
        printf("Underflow.\n");
    }
    else {
        value = stack[top];
        top--;
    }
    return value;
}

int translate(char ch)
{
    int value,v;
    value = ch;
    return v = (value - '0');
}

int isOperand(char ch)
{
    if(ch>='0' && ch<='9')
    {
        return 1;
    }
    else return -1;
}

int main()
{
    int v1,v2, res,length,ans;
    char c[100];

    printf("Enter stack size: ");
    scanf("%d", &n);

    scanf("%s", &c);

    length=strlen(c);

    for(int i=0; i<length; i++)
    {
        if(isOperand(c[i])==1)
        {
            push(translate(c[i]));
        }
        else{
            v1=pop();
            v2=pop();
           if(c[i]=='+')
           {
               res = v1+v2;
               push(res);
               continue;
           }
           else if(c[i]=='-')
           {
               res=v1-v2;
               push(res);
               continue;
           }
           else if(c[i]=='*')
           {
               res=v1*v2;
               push(res);
               continue;
           }
           else if(c[i]=='/')
           {
               res=v1/v2;
               push(res);
           }
        }
    }
    ans=pop();

    printf("%d", ans);
    return 0;
}
