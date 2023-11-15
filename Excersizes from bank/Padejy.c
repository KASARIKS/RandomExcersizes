#include <stdio.h>
void input(int *num);
int count(int num);

int main(void) {
    int num;
    const char strs[3][10] = {
        "copeek",
        "copeyki",
        "copeyka"
    };
    input(&num);
    while (num != 0) {
        printf("%d %s\n", num, strs[count(num)]);
        input(&num);
    }
    return 0;
}

void input(int *num) {
    printf("Input integer number(0 for exit): ");
    while (scanf("%d", num) != 1) {
        printf("WRONG INPUT!\n");
        printf("Input integer number(0 for exit): ");
        fflush(stdin);
    }
}

int count(int num) {
    num %= 100;
    if (num > 20) num %= 10;

    if ((num >= 5 && num <= 20) || num == 0) return 0;
    else if (num > 1 && num <= 4) return 1;
    else return 2;
}