#include <stdio.h>

int arr[103] = {0};

int main() {
    int n, i, a, b, c, res = 0;

    scanf("%d", &n);

    c = n;
    while(1) {
        a = c % 10 + c / 10;
        b = c % 10 * 10 + a % 10;

        if(arr[b] != 0) {
            break;
        }
        else {
            arr[b] = 1;
            c = b;
        }

        res++;
    }

    printf("%d", res);

    return 0;
}