#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void input(int *n);
int count(int n);

int main(void) {
    int n;
    input(&n);
    while (n != 0) {
        int r = count(n);
        printf("Result: %d\n", r);
        input(&n);
    }
    return 0;
}

void input(int *n) {
    printf("Input integer number(0 for exit): ");
    while (scanf("%d", n) != 1) {
        printf("WRONG INPUT!\n");
        printf("Input integer number(0 for exit): ");
        fflush(stdin);
    }
}

int count(int n) {
    int sum = 0;
    int nDigits = floor(log10(abs(n))) + 1;
    while (nDigits > 1) {
        for (int i = 0; i < nDigits; ++i) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
        sum = 0;
        printf("%d\n", n);
        nDigits = floor(log10(abs(n))) + 1;
    }
    return n;
}