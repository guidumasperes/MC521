#include <stdio.h>

int main() {
    int i, a, b, div, rest;

    scanf("%d %d", &a, &b);
    while(a != 0 && b!= 0) {
        if(a < b) {
            printf("0 %d / %d\n", a, b);
        } else {
            div = a / b;
            rest = a % b;
            printf("%d %d / %d\n", div, rest, b);
        }
        scanf("%d %d", &a, &b);
    }
    return 0;
}