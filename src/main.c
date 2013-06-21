#include"digit.h" 


/* #anay:  you should specify better command line arguments
 * your main program is named say "digit", then
 * digit -b  (or digit --break)  should call the function "data_set_divide"
 * to do this, you should use the library GNU getopt function (man getopt)
 * getopt is the standard way of reading command line arguments
 *
 * before you do neural networks, you should all this. Good software engineering practices
 */
int main(int argc,char *argv[])
{
	int n1=0,n2=0; // #anay: bad variable names. 
	int a1=0,a2=0;
	int i,chk=0;
	char fname[16];
	if(argc==3)
	{
		// getting output by method 1
		if(strcmp(argv[1],"m1")==0)
		{
			if(strcmp(argv[2],"acc")==0)
			{
				n1=accuracy_one();
				printf("accuracy for this method is %d/1500 \n",n1);
			}
			else
			{
				for(i=0;i<1499;i++)
				{
					sprintf(fname,"data/%d.txt",i);
					if(strcmp(fname,argv[2])==0)
					chk++;
				}
				if(chk!=0)
				{
				n1=prediction(argv[2]);
				printf("the predicted value by this method is %d \n",n1);
				}
				else
				printf("Such file does not exist \n");
			}
		}
		//getting output by method 2
		else if(strcmp(argv[1],"m2")==0)
		{
			printf("%s",argv[2]);
			if(strcmp(argv[2],"acc")==0)
			{
				a2=accuracy_two();
				printf("accuracy for this method is %d/1500  \n",a2);
			}
			else
			{
				for(i=0;i<1499;i++)
				{
					sprintf(fname,"data/%d.txt",i);
					if(strcmp(fname,argv[2])==0)
					chk++;
				}
				if(chk!=0)
				{
				n2=predict(argv[2]);
				printf("the predicted value by this method is %d \n",n2);
				}
				else
				printf("Such file does not exist \n");
			}
		}
		else
		{
			printf("Check the name of method you wrote!!! \n");
		}
	}
	else
	{
		printf("check the number of arguments");
	}
}

