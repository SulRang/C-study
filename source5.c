#include <stdio.h>
/* --------------------------------------------
문제: 3개의 수를 입력받고 2번째로 큰 값 출력하기
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