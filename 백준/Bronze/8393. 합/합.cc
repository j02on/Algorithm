#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int answer = 0;
	
	for(int i = 1; i <= n; i++)
	{
		answer += i;
	}
	
	printf("%d", answer);
	return 0;
}