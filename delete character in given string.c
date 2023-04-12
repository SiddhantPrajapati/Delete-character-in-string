//WAP
#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("myfile.txt","r");
    while((c=fgets(fp))!=EOP)//EOF means end of file
    {
        printf("%c",c);
    }
    fclose(fp);
}
