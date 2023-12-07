#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, res = 0, s, i, len = 0, tmp;
    int *arr;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &s);

        res += s;
    }

    tmp = res;

    len = 0;
    while(tmp != 0) {
        tmp /= 10;
        len++;
    }

    arr = (int*)malloc(sizeof(int) * len);

    i = 1;
    tmp = res;
    while(tmp != 0) {
        arr[i] = tmp % 10;
        tmp /= 10;
        i++;
    }

    arr[0] = arr[i-1];

    for(i = len - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}