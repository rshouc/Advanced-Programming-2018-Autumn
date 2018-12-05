#include<stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n)
	printf("%d\n",trailingZeroes(n));	
	system("pause");
	return 0;
}


int trailingZeroes(int n) 
{
    long zeros = 0;
    while(n>=1)
    {
        if(n%5==0)
        {
            n/=5;
            zeros+=n;
        }
        else
            n--;
    }
    return zeros;
}
