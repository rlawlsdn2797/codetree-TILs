#include <stdio.h>

int main() {
    int n, i, j, tmp, arr[103];

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i <= n; i++) {
        for(j = i + 1; j <= n; j++) {
            if(arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = n; i >= 1; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}