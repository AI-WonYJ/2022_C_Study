#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

  // 문제 1.
int hap(int n_1) {
  int cnt_1 = 0;
  for(int i = 1; i <= n_1; i++) {
      cnt_1 += i;
  }
  return cnt_1;
}

  // 문제 2.
int arithmetic(int scan_2) {
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
  if (scan_2 == 1) {
      cal_2 = scan_2_1 + scan_2_2;
  }
  else if (scan_2 == 2) {
      cal_2 = scan_2_1 - scan_2_2;
  }
  else if (scan_2 == 3) {
      cal_2 = scan_2_1 * scan_2_2;
  }
  else if (scan_2 == 4) {
      cal_2 = scan_2_1 / scan_2_2;
  }
  return cal_2;
}

  // 문제 3.
void hello() {
  printf("안녕하세요\n");
}

// 문제 4.
void plus10() {
    int scan_4;
    printf("변수를 입력하세요.\n");
    scanf("%d", &scan_4);
    printf("%d에 10을 더한 결과는 %d 입니다.\n", scan_4, scan_4 + 10);
}

  // 문제 5.
void hello_5() {
    for(int i_5 = 1; i_5 <= 10; i_5++) {
        printf("안녕하세요\n");
    }
}  

  // 문제 6.
int big() {
    int scan_6_1, scan_6_2;
    int bigger = 0;
    printf("첫 번째 수를 입력하세요.\n");
    scanf("%d", &scan_6_1);
    printf("두 번째 수를 입력하세요.\n");
    scanf("%d", &scan_6_2);
    if (scan_6_1 > scan_6_2) {
        bigger = scan_6_1;
    }
    else if (scan_6_2 > scan_6_1) {
        bigger = scan_6_2;
    }
    return bigger
    }

  // 문제 7.
void sniffling() {
    int scan_7;
    printf("정수 하나를 입력하세요.\n");
    scanf("%d", &scan_7);
    if (scan_7 % 2 == 0) {
        printf("even\n");
    }
    else if (scan_7 % 2 != 0) {
        printf("odd\n");
    }
    }

  // 문제 8.
int sniffling_8() {
    int scan_8;
    int sinffl = 0;
    printf("정수 하나를 입력하세요.\n");
    scanf("%d", &scan_8);
    if (scan_8 % 2 == 0) {
        sinffl = 0;
    }
    else if (scan_8 % 2 != 0) {
        sinffl = 1;
    }
    return sinffl;
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
  
  // 문제 4.
  plus10();
  
  // 문제 5.
  hello_5();
  
  // 문제 6.
  pritnf("%d", big());
  
  // 문제 7.
  sniffling();
  
  // 문제 8.
  printf("%d\n",sniffling_8());
  
  return 0;
}
