#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks here: ");
    scanf("%d", &marks);
    if (marks >= 80 && marks <= 100)
    {
        printf("Your grade is A+");
    }
    else if(marks >= 70 && marks < 80)
    {
        printf("Your grade is A");
    }
    else if(marks >= 60 && marks < 70)
    {
        printf("Your grade is A-");
    }
    else if(marks >= 50 && marks < 60)
    {
        printf("Your grade is B");
    }
    else if(marks >= 40 && marks < 50)
    {
        printf("Your grade is C");
    }
    else if (marks < 40)
    {
        printf("You've Failed!");
    }
    else
    {
        printf("Sorry! Wrong entry.");
    }
    return 0;
}
