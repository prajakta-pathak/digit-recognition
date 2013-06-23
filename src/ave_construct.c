//this function creates 10 files corrosponding to each digit each containing a matrix which consists of the average of all the bitmaps corrosponding to a digit
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"digit.h"
#define ROW 32
#define COL 32
#define LIMIT 75 //75 iterations because we need 75 values per digit to make our training data consist of 750 samples
void ave_construct()
{
	float num[ROW][COL];
	FILE *f0,*n0,*f1;
	int k,i,j,dummy;
	char c,fname[16];
	//to initialize our matrix
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/zero.txt","r");
	n0=fopen("data/ave0.txt","a");
	for(k=0;k<LIMIT;k++)
	{
	
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			

		//open the text file representing zero

		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/one.txt","r");
	n0=fopen("data/ave1.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/two.txt","r");
	n0=fopen("data/ave2.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/three.txt","r");
	n0=fopen("data/ave3.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/four.txt","r");
	n0=fopen("data/ave4.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/five.txt","r");
	n0=fopen("data/ave5.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/six.txt","r");
	n0=fopen("data/ave6.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
		
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/seven.txt","r");
	n0=fopen("data/ave7.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/eight.txt","r");
	n0=fopen("data/ave8.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/nine.txt","r");
	n0=fopen("data/ave9.txt","a");
	for(k=0;k<LIMIT;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
			
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				c=fgetc(f1);
				if(c=='0')
				num[i][j]=num[i][j]+0;
				else
				num[i][j]=num[i][j]+1;
			}
	
		}	
		fclose(f1);		
		
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			fprintf(n0,"%f",num[i][j]/LIMIT);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);
}
