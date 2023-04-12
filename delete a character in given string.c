//WAP to delete a character in given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10],n,b[10];
    int i,f=0;
    printf("enter string:");
    gets(a);
    printf("\n enter the character that you want to delete:");
    scanf("%c",&n);
    for(i=0;a[i]!='\0';i++)
    {
        if(n!=a[i])
        {
            b[f]=a[i];
            f++;

        }
    }
    b[f]='\0';
    strcpy(a,b);
    printf("\n new string:%s",a);
}
