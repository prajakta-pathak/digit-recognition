#include"digit.h"
int main(int argc,char *argv[])
{
	int count=0,i;
	float acc;
	int n1,n2;
	char fname[16];
	if(argc!=2)
	{
		printf("problem in input\n");
		// if you forget to write the file name or if you write more number of arguments which are ob not required then this will be 			printed
		return 0;
	}
	else
	{
		if( strcmp(argv[1],"data_divide") ==0)
		{
			data_set_divide();
		}

		else if( strcmp(argv[1],"create_training_data") ==0)
		{
			create_training_data();
		}
		
		else if( strcmp(argv[1],"training_data_divide") ==0)
		{
			training_data_divide();
		}

		else if( strcmp(argv[1],"average_construct") ==0)
		{
			ave_construct();
		}

		else if(strcmp(argv[1],"accuracy") ==0)
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
		
		else
		printf("command not found \n");
	}
}

