#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

  // 문제 1.
int hap(int n_1) {
  int cnt_1 = 0;
  for(int i = 1; i <= n_2; i++) {
      cnt_1 += i;
  }
  return cnt_1;
}
  // 문제 2.
int arithmetic(int n_2) {
  if(scan_2 == 1) {
      printf("덧셈을 선택하셨습니다.\n");
  }
  else if(scan_2 == 2) {
      printf("뺄셈을 선택하셨습니다.\n");
  }
  else if(scan_2 == 3) {
      printf("곱셈을 선택하셨습니다.\n");
  }
  else if(scan_2 == 4) {
      printf("나눗셈을 선택하셨습니다.\n");
  }
  int cal_2 = 0;
  int scan_2_1, scan_2_2;
  printf("첫번째 수를 입력하세요\n");
  scanf("%d", &scan_2_1);
  printf("두번째 수를 입력하세요\n");
  scanf("%d", &scan_2_2);
  if (n_2 == 1) {
      cal_2 = scan_2_1 + scan_2_2;
  }
  else if (n_2 == 2) {
      cal_2 = scan_2_1 - scan_2_2;
  }
  else if (n_2 == 3) {
      cal_2 = scan_2_1 * scan_2_2;
  }
  else if (n_2 == 4) {
      cal_2 = scan_2_1 / scan_2_2;
  }
  return cal_2;
}

  // 문제 3.
void hello() {
    printf("안녕하세요\n");
}


int main() {
            // 함수의 반환형(return type)
  // 문제 1.
  int scan_1;
  printf("한 개의 수를 입력하세요.\n");
  scanf("%d",&scan_1);
  printf("%d\n", hap(scan_1));
  
            // 인자가 여러 개인 함수
  // 문제 2.
  int scan_2;
  printf("어떤 연산을 하겠습니까?\n1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈\n");
  scanf("%d", &scan_2);
  printf("결과는 %d입니다.\n", arithmetic(scan_2));
  
            // 함수 문제 실습
  // 문제 3.
  hello();
  hello();
  
  return 0;
}
