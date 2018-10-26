#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i,j,k,N,ID[100],Num_init,Num_final, ID_max, temp2;
	double rate[100],temp,max;
	
	scanf("%d",&N);

	// input the data
	for(i=0;i<N;i++)
    {
		scanf("%d%d%d",&ID[i],&Num_init,&Num_final);
	    rate[i]=(double)Num_final/Num_init;
    }
	// sort the data with selection algorithm
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
		{
			if(rate[j]<rate[k])
				k=j;
		}
		temp=rate[k];
		rate[k]=rate[i];
		rate[i]=temp;
		
		temp2=ID[k];
		ID[k]=ID[i];
		ID[i]=temp2;	
	}
	for(i=0;i<N;i++)       
		printf("rate=%f\n",rate[i]);
	
	// find the max gap	
	max = 0;
	for(i=0;i<N-1;i++)
    {
		if( (rate[i+1]-rate[i])>max )
		{
			max = rate[i+1]-rate[i];
			ID_max = i;
		} 
    }
	// output results
	printf("%d\n",N-ID_max-1);
	for(i=ID_max+1;i<N;i++)
		printf("%d\n",ID[i]);

	
	printf("%d\n",ID_max+1);
	for(i=0;i<=ID_max;i++)
		printf("%d\n",ID[i]);
	
	system("pause");
	return 0;
}
