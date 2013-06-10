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
	for(k=0;k<75;k++)
	{
	//75 iterations because we need 75 values per digit to make our training data consist of 750 samples
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
		f1=fopen(fname,"r");	
		printf("%s",fname);	

		//open the text file representing zero

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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
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
	for(k=0;k<75;k++)
	{
		fscanf(f0,"%d",&dummy);
		sprintf(fname,"data/%d.txt",dummy);
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
			fprintf(n0,"%f",num[i][j]/75);
			fprintf(n0,"%c",' ');
		}
		fprintf(n0,"%c",'\n');
	}	
	
	fclose(f0);
	fclose(n0);
}
