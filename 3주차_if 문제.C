#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  // 문제 1.
  int num;
  printf("숫자를 하나 입력하세요\n");
  scanf("%d", &num);
  if(num > 100) {
    printf("100보다 큽니다.\n);
  }
           
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
  
  // 문제 4.
  
  return 0;
}
