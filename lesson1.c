//write a c program to calculate area of room using user given length and width
#include<stdio.h>
#include<conio.h>
void main()
{
    //declare(create) variables 
    //datatype variable
    float length,width,area;
    printf("enter length in square feet");
    scanf("%f",&length);
    
    printf("enter width in square feet");
    scanf("%f",&width);
    
    area = length * width; //process expression
    printf("\n area of room in square feet is %.2f",area);
}