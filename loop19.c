#include <stdio.h>
#include <conio.h>
void main()
{
    int row,column,count,printer;
    for(row=5,printer=1;row>=1;row=row-1,printer=printer+1)//3
    {
        for(column=0;column<row-1; column=column+1) //0<3
        {
            printf(" ");
        }
        for(count=1;count<=printer;count=count+1)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n good bye");
}