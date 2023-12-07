#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, r, res = 0, i;
    int *arr;

    scanf("%d", &n);

    arr = (int*)malloc(sizeof(int) * n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] == 2) res++;

        if(res == 3) {
            printf("%d ", i + 1);
            break;
        }
    }

    return 0;
}