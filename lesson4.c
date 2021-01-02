//write a program to find out heavyist person from two given person weight in kilogram
#include<stdio.h>
#include<conio.h>
void main()
{
    float weight1,weight2;
    printf("enter first person weight");
    scanf("%f",&weight1);
    printf("enter 2nd person weight");
    scanf("%f",&weight2);
    if(weight1==weight2)
    {
        printf("both persons weight is same");
    }
    else 
    {
        if(weight1>weight2) //< > <= >= == !=
        {
            printf("first person is heaviest person and his weight is %f",weight1);
        }
        else 
        {
            printf("second person is heaviest person and his weight is %f",weight2);
        }
    }
    
    printf("\n good bye");
}