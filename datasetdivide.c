#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *f,*f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8,*f9,*f0,*d;
	f=fopen("data.txt","r");
	f0=fopen("zero.txt","a");
	f1=fopen("one.txt","a");
	f2=fopen("two.txt","a");
	f3=fopen("three.txt","a");
	f4=fopen("four.txt","a");
	f5=fopen("five.txt","a");
	f6=fopen("six.txt","a");
	f7=fopen("seven.txt","a");
	f8=fopen("eight.txt","a");
	f9=fopen("nine.txt","a");
	d=fopen("dummy.txt","w+");
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
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f0);
			}
			putc(' ',f0);
			putc(new,f0);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}
		else if(strcmp(str,temp1)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f1);
			}
			putc(' ',f1);
			putc(new,f1);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}		
		else if(strcmp(str,temp2)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f2);
			}
			putc(' ',f2);
			putc(new,f2);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}	
		else if(strcmp(str,temp3)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f3);
			}
			putc(' ',f3);
			putc(new,f3);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}	
		else if(strcmp(str,temp4)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f4);
			}
			putc(' ',f4);
			putc(new,f4);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}	
		else if(strcmp(str,temp5)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f5);
			}
			putc(' ',f5);
			putc(new,f5);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}	
		else if(strcmp(str,temp6)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f6);
			}
			putc(' ',f6);
			putc(new,f6);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}	
		else if(strcmp(str,temp7)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f7);
			}
			putc(' ',f7);
			putc(new,f7);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}	
		else if(strcmp(str,temp8)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f8);
			}
			putc(' ',f8);
			putc(new,f8);
			fclose(d);
			d=fopen("dummy.txt","w+");
		}	
		else if(strcmp(str,temp9)==0)
		{
			printf("blah1");
			fseek(d,-3,SEEK_END);
			putc('E',d);
			rewind(d);
			while((c=fgetc(d))!='E')
			{
				putc(c,f9);
			}
			putc(' ',f9);
			putc(new,f9);
			fclose(d);
			d=fopen("dummy.txt","w+");
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
