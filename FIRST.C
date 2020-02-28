/* first*/
#include<stdio.h>
#include<conio.h>
void main()
{
char ch[2]={'A','B'};
char rule[2][3]={{'a','b'},{'A'}};
char first[2][20]={{'1'},{'2'}};
int i,j,l;
clrscr();
for(i=0;i<3;i++)
	{
	if(rule[i][0]>='0' && rule[i][0]<='2')
	{
	first[i][j]=rule[i][0];
	}
	else
	{
	for(i=0;i<2;i++)
	{
	if(ch[i]==rule[i][0])
	{
	int ln=0,k=0;
	while (first[j][k++]!='\0')
	ln++;
	k=0;
	l=1;
	if(ln!=1)
	for(k=1;k<l;k++)
	first[i][j]=first[j][k];
	}
	break;
	}
	}
	}
	printf("-----------first is :\n");
	for(i=0;i<2;i++)
	{
		printf("first of %c is", ch[i]);
		for(j=0;j<4;j++)
		{
		printf("%c\t", first[i][j]);
		}
		printf("\n");
		}
	getch();
	}