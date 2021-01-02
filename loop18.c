#include <stdio.h>
#include <conio.h>
void main()
{
    int row,column;
    for(row=5;row>=1;row=row-1)//3
    {
        for(column=0;column<row; column=column+1) //0<3
        {
            printf("%d ",column);
        }
        printf("\n");
    }
    printf("\n good bye");
}