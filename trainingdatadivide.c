#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *f0,*f1;
	f0=fopen("trainingdata.txt","r");
	char c;
	int i;
	for(i=0;i<2;i++)
	{
		f1=fopen("new1.txt","a");		
		while((c=fgetc(f0))!=' ')
		{
			putc(c,f1);
		}
		fseek(f0,1,SEEK_CUR);
		c=fgetc(f0);
		putc('\n',f1);
		fclose(f1);
	}
	fclose(f0);
}	
