#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *f0,*f1;
	f0=fopen("data/trainingdata.txt","r");
	char c;
	char fname[16];
	int i;
	for(i=0;i<1500;i++)
	{
		sprintf(fname,"data/%d-digit.txt",i);
		f1=fopen(fname,"a");		
		while((c=fgetc(f0))!=' ')
		{
			putc(c,f1);
		}
		c=fgetc(f0);
		fclose(f1);
	}
	fclose(f0);
}	
