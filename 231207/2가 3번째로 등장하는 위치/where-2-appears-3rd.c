#include <stdio.h>

int main() {
    int n, r, res = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &r);

        if(r == 2) res++;

        if(res == 3) {
            printf("%d ", i);
            break;
        }
    }

    return 0;
}