#include <stdio.h>
/* --------------------------------------------
����: 3���� ���� �Է¹ް� 2��°�� ū �� ����ϱ�
-------------------------------------------- */
void main()
{
	int input1, input2, input3;
	scanf("%d %d %d", &input1, &input2, &input3);
	if(input1>input2){
		if(input1>input3){
			if(input3>input2)
				printf("%d",input3);
			else
				printf("%d",input2);
		}
		else{
			printf("%d",input1);
		}
	}
	else{
		if(input2 >input3){
			if(input3>input1)
				printf("%d",input3);
			else
				printf("%d",input1);
		}
		else
			printf("%d",input2);
	}
}