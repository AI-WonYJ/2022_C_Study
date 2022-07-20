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
  int p, q;
  for(p = 2; p <= 100; p++) {
      int p_cnt = 0;
      for(q = 1; q <= p; q++) {
          if(p % q == 0){
              p_cnt++;
          }
      }
      if (p_cnt == 2) {
          printf("%d, ", p);
      }
  }
  printf("\n");
  
  // 문제 6.
  int dice_1, dice_2, dice_3;
  for(dice_1 = 1; dice_1 <= 6; dice_1++) {
      for(dice_2 = 1; dice_2 <= 6; dice_2++) {
          for(dice_3 = 1; dice_3 <= 6; dice_3++) {
              if (dice_1 + dice_2 + dice_3 == 15) {
                  printf("%d %d %d\n", dice_1, dice_2, dice_3);
              }
          }
      }
  }
  
  return 0;
}
