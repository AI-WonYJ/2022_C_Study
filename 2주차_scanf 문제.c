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
	int first_name, second_name, third_nae;
	printf("이름 각각의 글자의 획수를 차례대로 입력해주세요.\n");
	scanf("%d %d %d", &first_name, &second_name, &third_name);
	printf("이름 총 획수는 %d 획 입니다.", first_name + second_name + third_name);

	// 문제 4.
	int 제육, 돈까스;
	printf("제육볶음 개수를 입력하세요.\n");
	scanf("%d", &제육);
	printf("돈까스 개수를 입력하세요.\n");
	scanf("%d", &돈까스);
	printf("총 금액은 %d 입니다.", 제육*6000+돈까스*5000);
	
	//문제 5.
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a+b)*2);
}
