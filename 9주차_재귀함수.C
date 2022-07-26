#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    // 문제 1.
int hanoi(int n_1) {
    if(n_1 == 2) return 3; 
    else return 2 * hanoi(n_1-1) + 1;
}

    // 문제 2.
int wood(int n_2) {
    if(n_2 == 1) return 1; 
    else return wood(n_2-1) + n_2 * n_2;
}

    // 문제 3.
int fibo(int n_3) {
    if(n_3 == 1 || n_3 == 2) return 1; 
    else return fibo(n_3-1) + fibo(n_3-2);
}

    // 문제 4.
int measure(int n_4_1, int n_4_2) {
    if(n_4_1 % n_4_2 == 0) return n_4_2; 
    else return measure(n_4_2, n_4_1 % n_4_2);
}

    // 문제 5.
int divive(int n_5) {
    int num = 0;
    int divive_num = 0;
    num = n_5 % 10;
    divive_num = n_5 / 10;
    if(num == 0 && divive_num == 0) return n_5;
    printf("%d\n", num);
    return divive(divive_num);
}

    // 문제 6.
int pyramid(int base, int n_6) {
    int pyramid_num = 0;
    for(int i = 1; i <= n_6; i++) {
        printf("*");
    }
    printf("\n");
    if (n_6 == base) return 0;
    else return pyramid(base, n_6+1);
}










int main() {
        // 하노이탑 알고리즘
    // 문제 1.
    int hanoi_scan;
    printf("하노이탑 숫자를 입력하세요\n");
    scanf("%d", &hanoi_scan);
    printf("결과 : %d\n", hanoi(hanoi_scan));

          // 나무 블록 쌓기
    // 문제 2.
    int wood_scan;
    printf("나무 블록 층을 입력하세요\n");
    scanf("%d", &wood_scan);
    printf("결과 : %d\n", wood(wood_scan));
    
        // 피보나치 수열
    // 문제 3.
    int fibo_scan;
    printf("피보나치 수열 수를 입력하세요\n");
    scanf("%d", &fibo_scan);
    printf("결과 : %d\n", fibo(fibo_scan));
    
        // 최대공약수 찾기 함수: 유클리드 호제법
    // 문제 4.
    int measure_scan_1, measure_scan_2;
    printf("최대공약수를 찾을 두 수를 입력하세요\n");
    scanf("%d %d", &measure_scan_1, &measure_scan_2);
    printf("결과 : %d\n", measure(measure_scan_1, measure_scan_2));
    
        // 재귀함수 알고리즘 실습
    // 문제 5.
    int divive_scan;
    printf("쪼갤 수를 입력하세요\n");
    scanf("%d", &divive_scan);
    divive(divive_scan);
    
    // 문제 6.
    int pyramid_scan;
    printf("별 피라미드 층 수를 입력하세요\n");
    scanf("%d", &pyramid_scan);
    pyramid(pyramid_scan, 1);

    return 0;
}
