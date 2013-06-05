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
