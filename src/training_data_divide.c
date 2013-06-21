//this function divides all our data points into small files each containing a single data point
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"digit.h"
#define SIZE 1500 // here SIZE refers to the size of our data set 
int training_data_divide()
{
	FILE *f0,*f1;
	f0=fopen("data/trainingdata.txt","r");
	if(f0==NULL)
	{
		printf("\n fopen() Error!!!\n");
		//this error is printed if the trainingdata.txt does not exist
	        return 1;
	}	
	char c;
	char fname[16];
	int i;
	for(i=0;i<SIZE;i++)
	{
		sprintf(fname,"data/%d.txt",i);
		f1=fopen(fname,"a");
		if(f1==NULL)
		{
			printf("\n fopen() Error!!!\n");
			//this error is printed if the file does not exist
		        return 1;
		}		
		while((c=fgetc(f0))!=' ')
		{
			putc(c,f1);
		}
		c=fgetc(f0);
		fclose(f1);
	}
	fclose(f0);
}	



