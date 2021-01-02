// write a program to findout whether given character is vowel or consonsent 
#include<stdio.h>
#include<conio.h>
void main()
{
    char alphabet;
    printf("enter any one alphabet");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
        case 'a': //alphabet=='a'
        case 'A': //alphabet=='A'
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("it is vowel");
        break;
        default:
        printf("it can be consonsent");
    }
}