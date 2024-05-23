#include <stdio.h>

int main()
{
	int people[28];
	for(int h = 0; h < 28; h++)
	{
		scanf("%d", &people[h]);
	}
	int a = 0;
	
	for(int i = 1; i <= 30; i++)
	{
		a = 0;
		for(int j = 0; j < 28; j++)
		{
			if(i == people[j])
			{
				break;
			}
			else
			{
				a++;
			}
		}
		if(a == 28)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}