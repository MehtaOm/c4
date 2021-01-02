//write a program to find out area of two different circle and findout and print smallest circle (in terms of area)
#include<stdio.h>
#include<conio.h>
void main()
{
    int radius1,radius2;
    float area1,area2;
    printf("Enter first circle radius");
    scanf("%d",&radius1);
    printf("Enter second circle radius");
    scanf("%d",&radius2);
    area1 = 3.14 * radius1 * radius1;
    area2 = 3.14 * radius2 * radius2;
    if(area1==area2)
    {
        printf("both circle are same");
    }
    else 
    {
        if(area1<area2) //< > <= >= == !=
        {
            printf("first circle is smallest circle and its area is %f",area1);
        }
        else 
        {
            printf("second circle is smalles circle and its area is %f",area2);
        }
    }
    printf("\n good bye");
}