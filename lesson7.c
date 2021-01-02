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
        printf("it is A/a and it is vowel");
        break;
        case 'e':
        case 'E':
        printf("it is E/e and it is vowel");
        break;
        case 'i':
        case 'I':
        printf("it is I/i and it is vowel");
        break;
        case 'o':
        case 'O':
        printf("it is O/o and it is vowel");
        break;
        case 'u':
        case 'U':
        printf("it is U/u and it is vowel");
        break;
        default:
        printf("it can be consonsent");
    }
}