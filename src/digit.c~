#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"digit.h"

void data_set_divide()
{
	FILE *f,*f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8,*f9,*f0,*d;
	f=fopen("data/data.txt","r");
	f0=fopen("data/zero.txt","a");
	f1=fopen("data/one.txt","a");
	f2=fopen("data/two.txt","a");
	f3=fopen("data/three.txt","a");
	f4=fopen("data/four.txt","a");
	f5=fopen("data/five.txt","a");
	f6=fopen("data/six.txt","a");
	f7=fopen("data/seven.txt","a");
	f8=fopen("data/eight.txt","a");
	f9=fopen("data/nine.txt","a");
	d=fopen("data/dummy.txt","w+");
	int count=0,n,i;
	n=31218/33;
	char c,str[3],ch;
	char new='\n';
	char temp0[]=" 0";
	char temp1[]=" 1";
	char temp2[]=" 2";
	char temp3[]=" 3";
	char temp4[]=" 4";
	char temp5[]=" 5";
	char temp6[]=" 6";
	char temp7[]=" 7";
	char temp8[]=" 8";
	char temp9[]=" 9";
	for(i=0;i<n;i++)
	{
		while(count!=33)
		{
			ch=fgetc(f);
			
			if(ch!=new)
			{
				putc(ch,d);
			}
			else
			{
				putc(ch,d);
				count++;
			}
		}	
		count=0;
		fseek(d,-3,SEEK_END);	
		fgets(str,sizeof(str),d);
		if(strcmp(str,temp0)==0)
		{
			fprintf(f0,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}
		else if(strcmp(str,temp1)==0)
		{
			fprintf(f1,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}		
		else if(strcmp(str,temp2)==0)
		{
			fprintf(f2,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
		else if(strcmp(str,temp3)==0)
		{
			fprintf(f3,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
		else if(strcmp(str,temp4)==0)
		{
			fprintf(f4,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
		else if(strcmp(str,temp5)==0)
		{
			fprintf(f5,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
		else if(strcmp(str,temp6)==0)
		{
			fprintf(f6,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
		else if(strcmp(str,temp7)==0)
		{
			fprintf(f7,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
		else if(strcmp(str,temp8)==0)
		{
			fprintf(f8,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
		else if(strcmp(str,temp9)==0)
		{
			fprintf(f9,"%d\n",i);
			fclose(d);
			d=fopen("data/dummy.txt","w+");
		}	
	}
	fclose(f);
	fclose(d);
	fclose(f0);
	fclose(f1);
	fclose(f2);
	fclose(f3);
	fclose(f4);
	fclose(f5);
	fclose(f6);
	fclose(f7);
	fclose(f8);
	fclose(f9);
}

void create_training_data()
{
	FILE *f0,*f1;
	f0=fopen("data/data.txt","r");
	f1=fopen("data/trainingdata.txt","w+");
	int i=0;
	char c;
	while(i!=1500)
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

void training_data_divide()
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

void ave_construct()
{
	float num[32][32];
	FILE *f0,*n0,*f1;
	int k,i,j,dummy;
	char c,fname[16];
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/zero.txt","r");
	n0=fopen("data/zeroave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/one.txt","r");
	n0=fopen("data/oneave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/two.txt","r");
	n0=fopen("data/twoave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/three.txt","r");
	n0=fopen("data/threeave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/four.txt","r");
	n0=fopen("data/fourave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);
	
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/five.txt","r");
	n0=fopen("data/fiveave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/six.txt","r");
	n0=fopen("data/sixave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/seven.txt","r");
	n0=fopen("data/sevenave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/eight.txt","r");
	n0=fopen("data/eightave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);

	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			num[i][j]=0;
		}
	}	

	f0=fopen("data/nine.txt","r");
	n0=fopen("data/nineave.txt","a");
	for(k=0;k<50;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d-digit.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	
		for(i=0;i<32;i++)
		{
			for(j=0;j<32;j++)
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
	for(i=0;i<32;i++)
	{
		for(j=0;j<32;j++)
		{
			fprintf(n0,"%f",num[i][j]/50);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);
}

int prediction(char name[])
{
	int n;
	float dist[10];
	dist[0]=distancesq(name,"data/zeroave.txt");
	dist[1]=distancesq(name,"data/oneave.txt");
	dist[2]=distancesq(name,"data/twoave.txt");
	dist[3]=distancesq(name,"data/threeave.txt");
	dist[4]=distancesq(name,"data/fourave.txt");
	dist[5]=distancesq(name,"data/fiveave.txt");
	dist[6]=distancesq(name,"data/sixave.txt");
	dist[7]=distancesq(name,"data/sevenave.txt");
	dist[8]=distancesq(name,"data/eightave.txt");
	dist[9]=distancesq(name,"data/nineave.txt");	
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

float distancesq(char in[], char ave[])
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

int digitrec(char input[])
{
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


