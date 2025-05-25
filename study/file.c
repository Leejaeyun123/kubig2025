#include <stdio.h>

int main(void)
{
	int num, pn;		
	int cnt = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		pn = 1;							
		for (int j = 2; j < i; j++)		
		{
			if ((i % j) == 0)			
			{
				pn = 0;					
				break;
			}
		}
		if (pn == 1)					
		{
			printf("%3d", i);			
			cnt++;						
			if ((cnt % 5) == 0)
				printf("\n");
		}
	}
	return 0;
}


