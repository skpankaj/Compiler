/* identify token*/
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("arya.txt","rb");
while(ch!=EOF)
{
	ch=fgetc(fp);
	if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
	{
	printf("%c is a character\n",ch);
	}
	else if(ch==37||ch==42||ch==43||ch==45||ch==47)
	{
	printf("%c is an arithmetic operator \n",ch);
	}
	else if(ch>=48 && ch<=57)
	{
	printf("%c is a digit\n",ch);
	}
	else if(ch==32)
	{
	printf("%c is whitespace\n",ch);
	}
	else
	{
	printf("%c is a special character\n",ch);
	}

}
getch();
}











