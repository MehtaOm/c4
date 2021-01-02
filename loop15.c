//write a program to print following series
/*
    *
    *   *
    *   *   *
    *   *   *   *
    *   *   *   *   *
*/

#include <stdio.h>
#include <conio.h>
//100 90 80 70 ... 10
void main()
{
    int count;
    for (count = 1; count <= 5; count++)
    {
        for(int column=1;column<=count;column++)
        {
            printf("*");
        }
        printf("\n");
    }
}