#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int top=-1, len, brt=-1;
char stack[100];
char Expre[100];
char line[100];
char br[10];
// push, pop, checkSym, 
void ExPush(char ch)
{
    if(top!=len-1)
    {
        top++;
        Expre[top] == ch;
    }
}
void StPush(char ch)
{
    if(top!=len-1)
    {
        top++;
        stack[top] == ch;
    }
}
void BrPush(char ch)
{
    if(brt!=len-1)
    {
        brt++;
        br[brt] == ch;
    }
}
char pop()
{
    char c;
    if(top!=-1)
    {
        c=stack[top];
        top--;
    }
    return c;
}
bool checkSym(char c)
{
    if(c>='0' && c<='9')
    {
        return false;
    }
    else return true;
}
bool isOperator(char c)
{
    if(c=='+'|| c=='-'||c=='*'||c=='/')
    return true;
    else return false;
}

int main()
{
    scanf("%s", &line);
    len=strlen(line);
    
    for(int i=0; i<len; i++)
    {
        if(checkSym(line[i])==false)
        {
            ExPush(line[i]);
            continue;
        }
        else{
            if(line[i]=='(')
            {
                BrPush(line[i]);
                if(line[i]==')')
                {
                    for(int i=0; i<6; i++)
                    {
                        pop();
                        if(isOperator(pop())==true)
                        {
                            ExPush(pop());
                        }
                        else if(pop()=='(')
                        break;
                    }
                }
            }
            else
            StPush(line[i]);
            continue;
        }
    }
    for(int i=0; i<len; i++)
    printf("%d ", Expre[i]);
}