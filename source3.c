#include <stdio.h>
void main()
{
	int height, year;
	scanf("%d %d", &height, &year);

	if(height>=140 && year>=10)
		printf("타도 좋습니다.\n");
	else
		printf("죄송합니다.\n");
}