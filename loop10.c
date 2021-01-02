//write a program to findout factorial of given number 
// 5 = 5 x 4 X 3 X 2 x 1 = 120
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,answer=1;
    printf("enter number to get its factorial");
    scanf("%d",&number);
    if(number>=1)
    {
        while(number>=1) //< > == <= >= !=
        {
            answer = answer * number; //5
            number-=1; //4 
        }
        printf("\n factorial of given number is %d",answer);
        printf("\n good bye");
    }
    else 
    {
        printf("\n  invalid input");
    }
}