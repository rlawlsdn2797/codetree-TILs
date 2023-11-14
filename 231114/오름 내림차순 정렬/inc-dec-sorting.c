#include <stdio.h>

int main() {
    int n, i, j, tmp, arr[103], arr2[103];

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }

    for(i = 1; i <= n; i++) {
        for(j = i + 1; j <= n; j++) {
            if(arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }

            if(arr2[i] > arr2[j]) {
                tmp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = tmp;
            }
        }
    }

    for(i = 1; i <= n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for(i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}