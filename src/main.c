#include"digit.h"
int main(int argc,char *argv[])
{
	int count=0,i;
	float acc;
	int n1,n2;
	char fname[16];
	if(argc!=1)
	{
		printf("problem in input\n");
		// if you forget to write the file name or if you write more number of arguments which are ob not required then this will be 			printed
		return 0;
	}
	else
	{		
		for(i=0;i<1500;i++)
		{
			sprintf(fname,"data/%d-digit.txt",i);
			n1=prediction(fname);
			n2=digitrec(fname);
			if(n1==n2)
			count++;
		}
		printf("%d\n",count);
		
	}
}

