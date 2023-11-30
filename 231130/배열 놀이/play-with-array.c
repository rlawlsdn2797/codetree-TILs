#include <stdio.h>

int main() {
    int n, m, arr[103], a, b, r;

    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < m; i++) {
        scanf("%d", &r);

        if(r == 1) {
            scanf("%d", &a);
            printf("%d\n", arr[a]);
        }
        else if(r == 2) {
            scanf("%d", &a);
            int j;
            for(j = 1; j <= n; j++) {
                if(arr[j] == a) {
                    printf("%d\n", j);
                    break;
                }
            }

            if(j == n + 1) printf("0\n");
        }  
        else {
            scanf("%d %d", &a, &b);

            for(int j = a; j <= b; j++) {
                printf("%d ", arr[j]);
            }
            printf("\n");
        }
    }

    return 0;
}