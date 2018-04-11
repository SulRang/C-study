#include <stdio.h>
void main()
{
	int x, y;
	printf("좌표(x, y) : ");
	scanf("%d %d", &x, &y);
	if(x>0){
		if(y>0)
			printf("좌표(%d, %d)은 1사분면 입니다!!\n",x, y);
		else
			printf("좌표(%d, %d)은 3사분면 입니다!!\n",x, y);
	}
	else{
		if(y>0)
			printf("좌표(%d, %d)은 2사분면 입니다!!\n",x, y);
		
		else
			printf("좌표(%d, %d)은 4사분면 입니다!!\n",x, y);
	}
}