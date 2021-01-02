//write a program to findout sum of prime number between first 100 numbers using do while loop
#include <stdio.h>
#include <conio.h>
void main()
{
    int number, divisor, reminder, total;
    total = 0;
    number = 100;
    do
    {
        divisor = 2;
        do
        {
            reminder = number % divisor; //0
            if (reminder == 0)
                break;
            else
                divisor++; //3
        } while (divisor < number);
        if (divisor == number)
        {
            total = total + number;
            printf("\t %d",number);
        }
        number--;
    } while (number >= 1);
    printf("total = %d", total);
    printf("\n good bye");
}