/* count white space special character in c for file*/
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
int ws=0,sc=0;
char c;
clrscr();
fp=fopen("sarvendra.txt","rb");
while(c!=EOF)
{
	c=fgetc(fp);
	if(c==32)
		ws++;
	else if( c=='@'||c=='$'||c=='+')
		sc++;
}
printf("whitespace:%d",ws);
printf("\n special character: %d",sc);
getch();
}
