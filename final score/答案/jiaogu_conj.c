#include <stdio.h> 
int Cal(int input)
{
	if (input%2 == 0)
	{
		printf("%d/2=%d\n", input, input/2);
        return (input/2);
	}
	else
	{
		printf("%d*3+1=%d\n", input, input*3+1);
        return (input*3+1);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	while(n!=1)
		n=Cal(n);
    printf("End\n");
    system("pause");
    return 0;
}
