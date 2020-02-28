/* parser using top down parser*/
#include<stdio.h>
#include<conio.h>
void main()
{
char E[3]={'E','+','E'};
char F[1]={'N'};
char lang[3]={'2','+','2'};
int TOP=2;
char ch1,ch2;
int l=0;
char *mesg;

clrscr();
for(l=0;l<3;l++)
	{
	if(lang[l]>='0' && lang[l]<='9')
	{
	ch1='E';
	ch2='N';
	}
	else if(lang[l]=='+')
	{
	ch1='+';
	}
	else
	{
	mesg="not a number or operator";
	break;
	}
	if(ch1==E[TOP])
	{
	TOP--;
	mesg=="matched";
	continue;
	}
	else if(ch2==E[0])
	{
	mesg=="matched";
	continue;
	}
	else
	{
	mesg=="not matched with grammar";
	break;
	}
	}
	printf("%s",mesg);
	getch();
	}