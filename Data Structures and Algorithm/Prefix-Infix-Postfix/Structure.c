#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[30];
    int age;
}test;


int main()
{
    test p1,p2;

    strcpy(p1.name, "Sakhawat Hossain Mahin");
    p1.age = 21;

    printf("Name: %s \n", p1.name);
    printf("Age: %d", p1.age);
    

    return 0;
}