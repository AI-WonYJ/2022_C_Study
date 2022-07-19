#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  // 문제 1.
  int i;
  for(i=1; i<=30; i++;) {
    if (i % 2 != 0) {
      printf(i);
    }
  }
  
  // 문제 2.
  int j;
  for(j=1; j<=9; j++;) {
    printf("7 * %d = %d\n", j, 7*j);
  }  
  
  // 문제 3.
  int a, b, k;
  int sum_ab = 0;
  printf("첫번째 수를 입력하세요.\n");
  scanf("%d", &a);
  printf("두번째 수를 입력하세요.\n");
  scanf("%d", &b);
  for (k=a; k<=b; k++) {
    sum_ab += a;
  }
  printf("%d부터 %d까지의 합은 %d 입니다.\n", a, b, sum_ab);
  
  // 문제 4.
  for(int l = 1; l<=19; l++;) {
    for(int o = 1; o<=9; o++) {
      pritnf("%d * %d = %d\n", l, o ,l*o);
    }
    printf("\n");
  }
  
  // 문제 5.
  int n, count;
  int count_0 = 0;
  int count_1
  scanf("%d", &n);
  for(int m = 1; m <= n; m++;) {
    scanf("%d", &count);
    if (count == 1) {
      count_1++;
    }
    else if (count == 0) {
      count_0++;
    }
  }
  if(count_1 >= count_0) {
    printf("솔이는 전교 회장으로 뽑힐 것이다.\n");
  }
  else {
    printf("솔이는 전교 회장으로 뽑히기 어렵다.\n");
  }
  
  // 문제 6.
  int cal;
  scanf("%d", &cal);
  int plus_cal = 0;
  int multi_cal = 0;
  for(int c = 1; c <= cal; c++;) {
    plus_cal += c;
    multi_cal *= c;
  }
  printf("덧셈 결과 : %d", plus_cal);
  printf("곱셈 결과 : %d", multi_cal);
  
  // 문제 7.
  
  
  // 문제 8.
  
  return 0;
  
}
