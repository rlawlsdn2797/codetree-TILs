#include <stdio.h>
#include <string.h>

int main() {
    int n, i, sum = 0, j, res = 0, f, b;
    char str[23][23], a;

    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%s", str[i]);
    }
    scanf(" %c", &a);

    for(i = 1; i <= n; i++) {
        f = 0;
        b = 0;


        for(j = 0; j < strlen(str[i]); j++) {
            b++;
            if(str[i][j] == a) {
                f = 1;
            }
        }

        if(f == 1) {
            res++;
            sum += b;
        }
    }

    printf("%d %.2f", res, (float)sum / res);

    return 0;
}