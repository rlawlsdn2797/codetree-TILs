#include <stdio.h>
#include <stdlib.h>

int n;

void proc(int a, int b, int *p) {
    int i;
    if(a == 1) {
        printf("%d\n", p[b - 1]);
    }
    else if(a == 2) {
        for(i = 0; i < n; i++) {
            if(p[i] == b) {
                printf("%d\n", i + 1);
                return;
            }
        }

        if(i == n) {
            printf("0\n");
        }
    }
    else {
        int c;
        scanf("%d", &c);

        for(i = b; i <= c; i++) {
            printf("%d ", p[i - 1]);
        }
        printf("\n");
    }
}

int main() {
    int m, a, b, i;
    int *p;

    scanf("%d %d", &n, &m);

    p = (int *) malloc(sizeof(int) * n);

    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    for(i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);

        proc(a, b, p);
    }

    free(p);

    return 0;
}