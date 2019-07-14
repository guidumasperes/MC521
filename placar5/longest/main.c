#include <stdio.h>
#include <string.h>

void num_alpha(int alpha[], char str[]) {
    int i;
    int tam = strlen(str);

    for(i = 0; i < tam; i++) {
        alpha[str[i]- 97]++;
    }
}

int qualquer_nome(int alpha[], char str[]) {
    int i, cnt = 0;
    int tam = strlen(str);

    for(i = 0; i < tam; i++) {
        if(alpha[str[i]- 97] == 0) {
            return cnt;
        } else {
            alpha[str[i]- 97]--;
            cnt++;
        }

    }
    return cnt;
}


int main() {
    int i, j, t, res;
    char str1[10001];
    char str2[10001];
    int alpha[27] ;

    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        for(j = 0; j < 27; j++) {
            alpha[j] = 0;
        }
        scanf("%s ", str1);
        scanf("%s", str2);
        num_alpha(alpha, str2);
        res = qualquer_nome(alpha, str1);
        printf("%d\n", res);
    }
    return 0;
}