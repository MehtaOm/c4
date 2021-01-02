//write a program to findout given number is armstrong number or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int number,reminder,qube,sum,original_number;
    printf("enter number to find out is it armstrong number");
    scanf("%d",&number); //153
    original_number = number; //153
    sum=0;
    while(number>0)
    {
        reminder = number % 10; //1
        qube = reminder * reminder * reminder; //1
        sum = sum + qube; //152
        number = number / 10; //1
    }
    if(original_number==sum)
        printf("\n number is armstrong number");
    else 
        printf("\n number is not armstrong number");
}