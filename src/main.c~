#include"digit.h"
int main(int argc,char *argv[])
{
	int n1=0,n2=0;
	int a1=0,a2=0;
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
				n1=predict(argv[2]);
				printf("the predicted value by this method is %d \n",n1);
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
				n2=predict(argv[2]);
				printf("the predicted value by this method is %d \n",n2);
			}
		}
	}
	else
	{
		printf("check the number of arguments");
	}
}

