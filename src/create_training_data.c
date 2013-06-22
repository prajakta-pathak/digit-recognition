// this function creates a new file named "trainingdata.txt" in the data folder which consists of all the bitmaps from "data.txt" without its
//numerical interpretation.  
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"digit.h"
#define SIZE 1500 // here SIZE refers to the size of our data set 
void create_training_data()
{
	FILE *f0,*f1;
	f0=fopen("data/data.txt","r"); 
	f1=fopen("data/trainingdata.txt","w+");
	if(f0==NULL||f1==NULL)
	{
		printf("\n fopen() Error!!!\n");
		//this error is printed if the filename you wrote does not exist
	        return 1;
	}
	int i=0;
	char c;
	while(i!=SIZE) 
	{
		while((c=fgetc(f0))!=' ')
		{
		
			putc(c,f1);
		}
		i++;
		fseek(f0,1,SEEK_CUR);
		c=fgetc(f0);
		putc(' ',f1);
		putc('\n',f1);
	}
	fclose(f0);
	fclose(f1);
}
