#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 문제 1.
    int i = 1;
    while (i <= 9) {
        printf("7 * %d = %d\n", i, 7 * i);
        i++;
    }
    printf("\n");

    // 문제 2.
    int j = 1;
    int set_num;
    scanf("%d", &set_num);
    while (j <= 9) {
        printf("%d * j = %d\n", set_num, j, set_num * j);
        j++;
    }
    printf("\n");

    // 문제 3.
    int k = 10;
    int sum = 0;
    while (k <= 20) {
        sum += k;
        k++;
    }
    printf("10부터 20까지의 합은 %d 입니다.\n", sum);
    printf("\n");

    // 문제 4.
    int input_num;
    scanf("%d", &input_num);
    printf("\n");
    int o = 1;
    int input_sum = 0;
    while (o <= input_num) {
        input_sum += o;
        o++;
    }
    printf("1부터 %d까지의 합은 %d 입니다.\n", input_num, input_sum);

    // 문제 5.
    int input_a, input_b;
    scanf("%d %d", &input_a, &input_b);
    int input_ab_sum = 0;
    int input_cal;
    input_cal = input_a;
    while (input_cal <= input_b) {
        input_ab_sum += input_cal;
        input_cal++;
    }
    printf("\n%d부터 %d까지의 합은 %d입니다.\n\n", input_a, input_b, input_ab_sum);

    // 문제 6.
    int divive;
    scanf("%d", &divive);
    int u = 10;
    while (0 < divive) {
        printf("%d\n", divive % u);
        divive = divive / 10;
    }

    return 0;
}
