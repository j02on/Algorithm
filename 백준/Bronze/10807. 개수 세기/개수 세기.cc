#include <stdio.h>

int main()
{
	int totalNum = 0;
	scanf("%d", &totalNum);
	int numList[totalNum];
	for(int j = 0; j < totalNum; j++)
	{
		scanf("%d", &numList[j]);
	}

	int num = 0;
	scanf("%d", &num);
	int count = 0;
	
	for(int i = 0; i < totalNum; i++)
	{
		if(numList[i] == num)
		{
			count++;
		}
	}
	
	printf("%d", count);
	return 0;
}