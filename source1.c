#include <stdio.h>
void main()
{
	int input1, input2, input3;
	scanf("%d %d %d",&input1, &input2, &input3);
	
	printf("Â¦¼ö´Â : ");
	if(input1 %2 == 0)
	{
		printf("%d ",input1);
	}
	if(input2 %2 == 0)
	{
		printf("%d ",input2);
	}
	if(input3 %2 == 0)
	{
		printf("%d ",input3);
	}

	printf("\nÈ¦¼ö´Â : ");
	if(input1 %2 != 0)
	{
		printf("%d ",input1);
	}
	if(input2 %2 != 0)
	{
		printf("%d ",input2);
	}
	if(input3 %2 != 0)
	{
		printf("%d ",input3);
	}
}