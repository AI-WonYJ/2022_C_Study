#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  // 문제 1.
  int i;
  for(i=1; i<=30; i++) {
    if (i % 2 == 0) {
      printf("%d, ", i);
    }
  }
  printf("\n");
  
  // 문제 2.
  int j;
  for(j=1; j<=9; j++) {
    printf("7 * %d = %d\n", j, 7*j);
  }  
  
  // 문제 3.
  int q, p, k;
  int sum_qp = 0;
  printf("첫번째 수를 입력하세요.\n");
  scanf("%d", &q);
  printf("두번째 수를 입력하세요.\n");
  scanf("%d", &p);
  for (k=q; k<=p; k++) {
    sum_qp += q;
  }
  printf("%d부터 %d까지의 합은 %d 입니다.\n", q, p, sum_qp);
  
  // 문제 4.
  for(int l = 1; l<=19; l++) {
    for(int o = 1; o<=9; o++) {
      printf("%d * %d = %d\n", l, o ,l*o);
    }
    printf("\n");
  }
  
  // 문제 5.
  int n, count;
  int count_0 = 0;
  int count_1 = 0;
  scanf("%d", &n);
  for(int m = 1; m <= n; m++) {
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
  int multi_cal = 1;
  for(int c = 1; c <= cal; c++) {
    plus_cal += c;
    multi_cal *= c;
  }
  printf("덧셈 결과 : %d\n", plus_cal);
  printf("곱셈 결과 : %d\n", multi_cal);
  
  // 문제 7.
  int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
  int find = 0;
  scanf("%d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
  for(int find = 100; find > 0; find--) {
    if(find == a1 || find == a2 || find == a3 || find == a4 || find == a5 || find == a6 || find == a7 || find == a8 || find == a9 || find == a10) {
      printf("Grid는 %d를 가지고 있을 것이다.\n", find);
      break;
    }
  }
  
  
  // 문제 8.
  int lop;
  int state = 1;
  while (state == 1) {
    scanf("%d", &lop);
    if (lop =0 ) {
      if (lop %2 == 0) {
        printf("good\n");
      }
      else if (lop < 0) {
        printf("false\n");
      }
      else {
        printf("bad\n");
      }
    }
    else if (lop = 0) {
      break;
    }
  }
  
  return 0;
   
}
