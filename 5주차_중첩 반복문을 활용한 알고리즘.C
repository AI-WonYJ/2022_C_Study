#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
            // 별 피라미드 만들기
  // 문제 1.
  int i, i2;
  for(i = 1; i <= 5; i++){
    for(i2 = 1; i2 <= i; i2++) {
      printf("*");
    }
    printf("\n");
  }
  
  // 문제 2.
  int scan_star, j, j2;
  scanf("%d", &scan_star);
  for(j = 1; j <= scan_star; j++) {
    for(j2 = 1; j2 <= j; j2++) {
      printf("*");
    }
    printf("\n");
  }
  
  // 문제 3.
  int k, k2, k3;
  for(k = 1; k <= 5; k++) {
    for(k2 = 1; k2 <= 5-k; k2++) {
      printf(" ");
    }
    for(k3 = 1; k3 <= k; k3++) {
      printf("*");
    }
    printf("\n");
  }
  
  // 문제 4.
  int scan_di, x;
  scanf("%d", &scan_di);
  while(scan_di > 0) {
    int divive = 0;
    divive = scan_di % 10;
    for(x = 1; x <= divive; x++) {
        printf("*");
    }
    printf("\n");
    scan_di /= 10;
  }
            
  // 문제 5.
  
  
  // 문제 6.
  
  
  // 문제 7.
  
  
  return 0;
}
