//write a program to develope basic mathematical calculator for two input. if user press 1 do addition, if user press 2 do substraction if user press 3 do multiplication and if user press 4 do division otherwise display message invalid choice 
#include<stdio.h>
#include<conio.h>
void main()
{
    float num1,num2,result;
    int choice;
    printf("enter first number");
    scanf("%f",&num1);
    printf("enter second number");
    scanf("%f",&num2);
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: //choice==1
        result = num1 + num2;
        break;
        
        case 2: //choice==2
        result = num1 - num2;
        break;
        
        case 3: //choice==3
        result = num1 * num2;
        break;
        case 4: //choice==4
        result = num1 / num2;
        break;
        default:
        printf("invalid choice");
    }
    if(choice>=1 && choice<=4)
    {
        printf("\n result is %f",result);
    }
    printf("\n good bye");
}