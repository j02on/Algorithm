#include <stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h,i,j = 0;
	int total = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
//	scanf("%d %d", &e, &f);
//	scanf("%d %d", &g, &h);
//	scanf("%d %d", &i, &j);
	
	for(int i = 0; i < b; i++)
	{
		scanf("%d %d", &c, &d);
		total += c * d;
	}
	
	if(a == total)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}