#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, res = 0, s, i, len = 0, tmp;
    char result[12];

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &s);
        res += s;
    }

    sprintf(result, "%d", res);

    printf("%s%c", result + 1, result[0]);

    return 0;
}