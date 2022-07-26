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

    retu
    return 0;
}
