#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ispresent(char s[],char in[],int n);

int main(int argc,char *argv[])
{
	int n=10;
	if(argc!=2)
	{
		printf("problem in input\n");
		return 0;
	}
	else
	{
		if(ispresent("zero.txt",argv[1],91)==1)
		{
			n=0;
		}
		else if(ispresent("one.txt",argv[1],97)==1)
		{
			n=1;
		}
		else if(ispresent("two.txt",argv[1],94)==1)
		{
			n=2;
		}
		else if(ispresent("three.txt",argv[1],88)==1)
		{
			n=3;
		}
		else if(ispresent("four.txt",argv[1],98)==1)
		{
			n=4;
		}
		else if(ispresent("five.txt",argv[1],92)==1)
		{
			n=5;
		}
		else if(ispresent("six.txt",argv[1],98)==1)
		{
			n=6;
		}
		else if(ispresent("seven.txt",argv[1],98)==1)
		{
			n=7;
		}
		else if(ispresent("eight.txt",argv[1],89)==1)
		{
			n=8;
		}
		else if(ispresent("nine.txt",argv[1],96)==1)
		{
			n=9;
		}
	}
	printf("%d\n",n);
}

int ispresent(char s[], char in[], int n)
{
	int res=0,count=0;
	char c,ch;
	int i;
	FILE *f1,*f2;
	f1=fopen(s,"r");
	f2=fopen(in,"r");	
	for(i=0;i<n;i++)
	{
		count=0;
		while((c=fgetc(f1))!=' ')
		{
			ch=fgetc(f2);
			if(ch==c)
			count++;
			else
			count=0;
		}
		if(count==1056)
		{
			res=1;
		}
		rewind(f2);
		fseek(f1,1,SEEK_CUR);
	}
	fclose(f1);
	fclose(f2);
	return res;
}

