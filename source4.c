#include <stdio.h>
void main()
{
	int x, y;
	printf("��ǥ(x, y) : ");
	scanf("%d %d", &x, &y);
	if(x>0){
		if(y>0)
			printf("��ǥ(%d, %d)�� 1��и� �Դϴ�!!\n",x, y);
		else
			printf("��ǥ(%d, %d)�� 3��и� �Դϴ�!!\n",x, y);
	}
	else{
		if(y>0)
			printf("��ǥ(%d, %d)�� 2��и� �Դϴ�!!\n",x, y);
		
		else
			printf("��ǥ(%d, %d)�� 4��и� �Դϴ�!!\n",x, y);
	}
}