#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
            // float 실수 자료형
  // 문제 1.
  float weight, height;
  printf("당신의 몸무게를 입력하세요. (kg 단위)\n");
  scanf("%f", &weight);
  printf("당신의 키를 입력하세요. (m 단위)\n");
  scanf("%f", &height);
  float BMI = weight / (height * height);
  printf("당신의 BMI지수는 %f 입니다.\n", BMI);
  
            // long long 정수 자료형
  // 문제 2.
  long long cal_n = 1;
  int fac_n;
  printf("몇 팩토리얼을 계산할까요?\n");
  scanf("%d", &fac_n);
  for(int n = fac_n; n >= 1; n--) {
      cal_n *= n;
      printf("결과는 %lld 입니다.\n", cal_n);
  }
  
            // long long 정수 자료형
  // 문제 3.
  char c;
  for(c = 'A'; c <= 'Z'; c++) {
      printf("%c ", c);
  }
  
  return 0;
}
