//write a program to findout bmi from given height and weight  in kg 
//formula  bmi = weight/ (height in meter * height in meter)
#include<stdio.h>
#include<conio.h>
void main()
{
    float weight,height,cm,meter,bmi;
    int foot,inch;
    printf("enter weight");
    scanf("%f",&weight);
    
    printf("enter height in (foot & inch)"); //5.11
    scanf("%f",&height); 
    
    //first convert height into meter 
    foot = height;//5
    inch = height - foot; //11
    cm = (foot * 30.48 ) + (inch * 2.54);
    meter = cm / 100;   
    bmi = weight / (meter * meter);
    
    printf("\n bmi is %.2f ",bmi);
    
}