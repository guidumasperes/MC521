#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, num, sum;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        sum = 1;
        scanf("%d", &num);
        for(j = 2; j <= sqrt(num); j++) { //todos os divisores de num são divisores de num/2
            if(num % j == 0) {
                if(j == (num/j))
                    sum+=j;
                else
                    sum+=(j+(num/j));
            }
        }
        if(num == 1)
            printf("0\n");
        else
            printf("%d\n", sum);
    }
    return 0;
}
