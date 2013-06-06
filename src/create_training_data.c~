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
