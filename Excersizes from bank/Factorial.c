#include <stdio.h>

int main(void) {
    int n;
    printf("Input integer number: ");
    while(scanf("%d", &n) != 1) {
        printf("WRONG INPUT!\n");
        printf("Input integer number: ");
        fflush(stdin);
    }
    int fact = 1;
    for (; n > 0; --n) fact *= n;
    printf("Factorial: %d", fact); 
    return 0;
}