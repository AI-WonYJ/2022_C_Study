#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	// 문제 1.
	int value1;
	int value2;
	scanf("%d" ,&value1);
	scanf("%d", &value2);
	printf("%d + %d = %d\n", value1, value2,value1+value2);
	printf("%d - %d = %d\n", value1, value2, value1 - value2);
	return 0;

	// 문제 2.
	int mom_age, dad_age, sis_age, my_age, bro_age;
	printf("엄마, 아빠, 누나, 본인, 동생 나이를 차례로 입력하세요.\n");
	scanf("%d %d %d %d %d",&mom_age, &dad_age, &sis_age, &my_age, &bro_age);
	printf("가족 나이의 총합은 %d 세 입니다.", mom_age + dad_age + sis_age + my_age + bro_age);

	// 문제 3.

	//  4.
}
