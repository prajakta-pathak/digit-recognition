// this is the method 1
//it calculates the average 32X32 matrix corrosponding to each digit 
//our example is alloted the value corrosponding to the digit whose average matrix is nearest to the bitmap of the example
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"digit.h"
#define SIZE 1500 // here SIZE refers to the size of our data set 
int accuracy_one()
{
	int count=0,i;
	float acc;
	int n1,n2;
	char fname[16];
	for(i=0;i<SIZE;i++)
		{
			sprintf(fname,"data/%d.txt",i);
			n1=prediction(fname);
			n2=digitrec(fname);
			if(n1==n2)
			count++;
		}
	return count;
}
int prediction(char name[])
{
	int n,i;
	float dist[10];
	dist[0]=distancesq1(name,"data/ave0.txt");
	dist[1]=distancesq1(name,"data/ave1.txt");
	dist[2]=distancesq1(name,"data/ave2.txt");
	dist[3]=distancesq1(name,"data/ave3.txt");
	dist[4]=distancesq1(name,"data/ave4.txt");
	dist[5]=distancesq1(name,"data/ave5.txt");
	dist[6]=distancesq1(name,"data/ave6.txt");
	dist[7]=distancesq1(name,"data/ave7.txt");
	dist[8]=distancesq1(name,"data/ave8.txt");
	dist[9]=distancesq1(name,"data/ave9.txt");	
	n=smallest(dist);	
	return n;
}

int smallest(float num[])
{
	int i,res=0;
	for(i=0;i<10;i++)
	{
		if(num[i]<num[res])
		{
			res=i;
		}
	}
	return res;
}

float distancesq1(char in[], char ave[])
{
	float num1[32][32];
	float num2[32][32];
	float dis=0;
	char c;
	FILE *f1,*f2;
	f1=fopen(in,"r");
	f2=fopen(ave,"r");
	int i,j;
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			c=fgetc(f1);
			if(c=='0')
			num1[i][j]=0;
			else
			num1[i][j]=1;
		}
		fseek(f1,1,SEEK_CUR);
	}
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fscanf(f2,"%f",&num2[i][j]);	
		}
	}
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			dis=dis+(num1[i][j]-num2[i][j])*(num1[i][j]-num2[i][j]);
		}
	}
	fclose(f1);
	fclose(f2);
	return dis;
}




