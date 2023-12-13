#include <stdio.h>
#include <string.h>

int main() {
    int n, i, sum = 0, j, res = 0;
    char str[23][23], a;

    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%s", str[i]);
    }
    scanf(" %c", &a);

    for(i = 1; i <= n; i++) {
            if(str[i][0] == a) {
                res++;
                sum += strlen(str[i]);
            }
    }

    printf("%d %.2f", res, (float)sum / res);

    return 0;
}