#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  
            // 약수 찾기
  // 문제 1.
  int measure_num;
  for(int measure = 1; measure <= measure_num; measure++;) {
    if (measure_num % measure == 0) {
      printf("%d\t",measure);
    }
  }
  
  // 문제 2.
  int measure_num2;
  int measure2_cnt = 0;
  for(int measure2 = 1; measure2 <= measure_num2; measure2++;) {
    if (measure_num2 % measure2 == 0) {
      measure2_cnt++
    }
  }
  printf("%d",measure2_sum);
  
            // 소수 판별하기
  // 문제 3.
  int prime_cnt
  for(int i = 1; i <= 503159; i++;) {
    if (503159 % i == 0) {
      prime_cnt++;
    }
  }
  if (prime_cnt == 2) {
    printf("소수입니다.\n");
  }
  else {
    printf("소수가 아닙니다.\n");
  }
  
  // 문제 4.
  int prime_cnt2
  for(int i2 = 1; i2 <= 503158; i2++;) {
    if (503158 % i2 == 0) {
      prime_cnt2++;
    }
  }
  if (prime_cnt2 == 2) {
    printf("소수입니다.\n");
  }
  else {
    printf("소수가 아닙니다.\n");
  }
  
  
  // 문제 5.
  int scan_prime;
  printf("숫자 하나를 입력하세요.\n");
  scanf("%d",&scan_prime);
  int scan_prime_cnt
   for(int i3 = 1; i3 <= scan_prime; i3++;) {
    if (503158 % i3 == 0) {
      scan_prime_cnt++;
    }
  }
  if (scan_prime_cnt == 2) {
    printf("%d은(는) 소수입니다.\n", scan_prime);
  }
  else {
    printf("%d은(는) 소수가 아닙니다.\n", scan_prime);
  }
  
          // 공약수 모두 찾기
  //문제 6.
  int a, b;
  scanf("%d %d", &a, &b);
  for (int x = 1; x <= a; x++) {
    if (a % x == 0 && b % x == 0) {
      printf("%d\n", x);
    }
  }
  
          // 최대공약수 찾기
  //문제 7.
  int a2, b2;
  int gcd;
  printf("첫번째 수를 입력하세요\n");
  scanf("%d", &a2);
  printf("두번째 수를 입력하세요.\n");
  scanf("%d", &b2);
  for (int x2 = 1; x2 <= a2; x2++) {
    if (a2 % x2 == 0 && b2 % x2 == 0) {
      gcd = x2;
    }
  }
  printf("%d와 %d의 최대공약수는 %d이다.\n", a2, b2, gcd);
  
  reteurn 0;
  
}
