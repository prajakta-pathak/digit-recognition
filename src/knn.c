#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"digit.h"
#define ROW 32
#define COL 32
#define SIZE 1500
int accuracy_two()
{
	//this function calculates the accuracy of method 2
	int count=0,i;
	float acc;
	int n1,n2;
	char fname[16];
	for(i=0;i<SIZE;i++)
		{
			sprintf(fname,"data/%d.txt",i);
			n1=predict(fname);
			n2=digitrec(fname);
			if(n1==n2)
			count++;
			printf("%d\n",count);
		}
	return count;
}

int predict(char name[])
{
	//Uses knn to predict the value of required bitmap
	int n=0,res;
	float dist;
	int i;
	int count[10];
	//count[m] symbolizes the number of points belonging to class m in the neighbourhood of our required point
	char fname[16];
	for(i=0;i<10;i++)
	count[i]=0;

	for(i=0;i<750;i++)
	{
		sprintf(fname,"data/%d.txt",i);
		dist=distancesq(name,fname);
		if(dist<130)
		// radius of our circle of required neighbourhood is 300
		{
			n=digitrec(fname);
			count[n]++;	
		}
	}
		
	res=largest_count(count);
	return res;
}

int largest_count(int num[])
{
	//returns the largest number of the array
	int i,res=0;
	for(i=0;i<10;i++)
	{
		if(num[i]>num[res])
		{
			res=i;
		}
	}
	return res;
}

float distancesq(char in[], char ave[])
{
	//calculates the euclidean distance between two structures
	float num1[ROW][COL];
	float num2[ROW][COL];
	float dis=0;
	char c;
	FILE *f1,*f2;
	f1=fopen(in,"r");
	f2=fopen(ave,"r");
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			c=fgetc(f1);
			if(c=='0')
			num1[i][j]=0;
			else
			num1[i][j]=1;
		}
		fseek(f1,1,SEEK_CUR);
	}
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			c=fgetc(f2);
			if(c=='0')
			num2[i][j]=0;
			else
			num2[i][j]=1;
		}
		fseek(f2,1,SEEK_CUR);
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

int digitrec(char input[])
{
		//this function gives the actual value of the digit
		int n;
		if(ispresent("data/zero.txt",input,91)==1)
		{
			n=0;
		}
		else if(ispresent("data/one.txt",input,97)==1)
		{
			n=1;
		}
		else if(ispresent("data/two.txt",input,94)==1)
		{
			n=2;
		}
		else if(ispresent("data/three.txt",input,88)==1)
		{
			n=3;
		}
		else if(ispresent("data/four.txt",input,98)==1)
		{
			n=4;
		}
		else if(ispresent("data/five.txt",input,92)==1)
		{
			n=5;
		}
		else if(ispresent("data/six.txt",input,98)==1)
		{
			n=6;
		}
		else if(ispresent("data/seven.txt",input,98)==1)
		{
			n=7;
		}
		else if(ispresent("data/eight.txt",input,89)==1)
		{
			n=8;
		}
		else if(ispresent("data/nine.txt",input,96)==1)
		{
			n=9;
		}
		return n;
	}
int ispresent(char s[], char in[], int n)
{
//this function checks if that file number is present in the file s
//here n represents the total number of examples present in that file
	int res=0;
	char c,ch[5];
	int i,num,dummy;
	FILE *f1,*f2;
	f1=fopen(s,"r");
	f2=fopen(in,"r");
	in+=5;	
	num=atoi(in);	
	if(f2==NULL)
	{
		printf("\n fopen() Error!!!\n");
		//this error is printed if the filename you wrote does not exist
	        return 1;
	}
	for(i=0;i<n;i++)
	{
		fscanf(f1,"%d",&dummy);
		if(dummy==num)
		{
			res=1;
		}
	}
	fclose(f1);
	fclose(f2);
	return res;
}




