//write a program to given number multiplication table in following manner using do while loop
// input = 5
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * d = 15 ....
#include <stdio.h>
#include <conio.h>
void main()
{
    int number, multiplier;
    printf("\n enter number");
    scanf("%d", &number);
    multiplier = 1;
    do
    {
        printf("\n %d * %d = %d", number, multiplier, (number * multiplier));
        multiplier = multiplier + 1;
    }while(multiplier<=10);
    printf("\n good bye");
}