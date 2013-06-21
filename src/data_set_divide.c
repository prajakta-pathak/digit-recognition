/* anay's comments on the codes starts with #anay
 *
 */


// #anay: please document your functions
// to keep your approach scalable, you should not hardcode the file names in your functions
// Instead, specify the file name, (or atleast the folder name) as your command line argument.
// for examle, data_set_divide("data") would search for files "data/zero.txt" etc.

void data_set_divide()
{
	FILE *f,*f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8,*f9,*f0,*d;
	// #anay: bad idea to use so many file pointers. There is usually a limit on the number of file pointers
	// that a program can keep open. The present approach is not scalable. i.e, if the number of objects 
	// (in this case, digits) which we want to classify (in this case 10), is a large number, the present
	// approach fails. Instead, just keep a couple of files open at the same time. 
	// open a file, close a file. but dont keep many files open simultaneously

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
	// #anay, if say the file data/three.txt does not exist, your program would crash with a segmentation fault.
	// Thus, you should check whether the file has opened or not.
	// f3 = fopen("data/three.txt","a")
	// if(f3==NULL) {
	//    printf("could not open file");
	// }
	//
	// There are better ways to handle this issue, we would discuss it latter (man perror)


	
	int count=0,n,i;
	n=31218/33; // bad idea to hardcore numbers .. use a macro for 31218 and 33
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
