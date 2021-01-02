//write a program to findout given number is prime number or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int number,divider=2,reminder;
    printf("enter number to find out is it prime number");
    scanf("%d",&number); //13
    
    while(divider<number) //13<13
    {
        reminder = number%divider; // 14%12
        if(reminder==0)
            break;
        else 
            divider+=1; // divider = divider + 1 (3)  
    }  
    if(divider==number)
        printf("\n given number is prime number");
    else 
        printf("\n given number is composite number");
}