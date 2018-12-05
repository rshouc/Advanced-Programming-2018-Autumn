#include <stdio.h> 
#include <math.h> 
int main() 
{ 
 	int n=0;  	
	int i,j; 
 	int cell[100][100];
	int count = 0;  	

 	scanf("%d", &n); 
 	for (i=0;i<n;i++) 
 	 	for (j=0;j<n;j++)  	 	
			scanf("%d", &cell[i][j]); 

 	for (i = 1; i < n-1; i++) 
 	 	for (j = 1; j < n-1; j++) 
 	 	 	if (cell[i-1][j]-cell[i][j]>=50 &&
				cell[i+1][j]-cell[i][j]>=50 &&
				cell[i][j-1]-cell[i][j]>=50 &&
				cell[i][j+1]-cell[i][j]>=50) 
 	 	 	 	count++; 
				
 	printf("%d\n", count); 
 	return 0; 
 
}
