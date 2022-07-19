#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  // 문제 1.
  int num;
  printf("숫자를 하나 입력하세요\n");
  scanf("%d", &num);
  if(num > 100) {
    printf("100보다 큽니다.\n");
  }
  printf("\n");
           
  // 문제 2.
  int num1, num2;
  printf("첫번째 수를 입력하세요.\n");
  scanf("%d", &num1);
  printf("두번째 수를 입력하세요.\n");
  scanf("%d", &num2);
  if (num1 > num2) {
    printf("첫번째 수가 더 큽니다.\n");
  }
  if (num1 < num2) {
    printf("두번째 수가 더 큽니다.\n");
  }
  printf("\n");
  
  // 문제 3.
  int num3, num4;
  printf("첫번째 수를 입력하세요.\n");
  scanf("%d", &num3);
  printf("두번째 수를 입력하세요.\n");
  scanf("%d", &num4);
  if (num3 > num4) {
    printf("첫번째 수가 더 큽니다.\n");
  }
  else {
    printf("두번째 수가 더 큽니다.\n");
  }
  printf("\n");
  
  // 문제 4.
  int num5;
  scanf("%d", &num5);
  if (num5 < 5 && num5 > 100) {
    printf("두 자리 수가 아닙니다.\n");
  }
  printf("\n");
  
  // 문제 5.
  printf("어떤 연산을 하겠습니까?\n");
  printf("1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈\n");
  int num6, num7, num8;
  scanf("%d", &num6);
  if (num6 == 1) {
    printf("덧셈을 선택하셨습니다.\n");
    printf("첫번째 수를 입력하세요.\n");
    scanf("%d", &num7);
    printf("두번째 수를 입력하세요.\n");
    scanf("%d", &num8);
    printf("결과는 %d입니다.\n", num7 + num8);
  }
  else if (num6 == 2) {
    printf("뺄셈을 선택하셨습니다.\n");
    printf("첫번째 수를 입력하세요.\n");
    scanf("%d", &num7);
    printf("두번째 수를 입력하세요.\n");
    scanf("%d", &num8);
    printf("결과는 %d입니다.\n", num7 - num8);
  }
  else if (num6 == 3) {
    printf("곱셈을 선택하셨습니다.\n");
    printf("첫번째 수를 입력하세요.\n");
    scanf("%d", &num7);
    printf("두번째 수를 입력하세요.\n");
    scanf("%d", &num8);
    printf("결과는 %d입니다.\n", num7 * num8);
  }
  else if (num6 == 4) {
    printf("나눗셈을 선택하셨습니다.\n");
    printf("첫번째 수를 입력하세요.\n");
    scanf("%d", &num7);
    printf("두번째 수를 입력하세요.\n");
    scanf("%d", &num8);
    printf("결과는 %d입니다.\n", num7 / num8);
  }
  
  return 0;
}
