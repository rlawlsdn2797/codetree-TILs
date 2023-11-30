#include <stdio.h>
#include <stdlib.h>

int n1, n2;

int Func(int *arr1, int *arr2) {
    int i;
    for(int i = 0; i < n1; i++) {
        int j;

        for(j = 0; j < n2; j++) {
            if(arr1[i+j] != arr2[j]) {
                break;
            }
        }

        if(j >= n2) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int *arr1, *arr2;

    scanf("%d %d", &n1, &n2);

    arr1 = (int*)malloc(sizeof(int) * n1);
    arr2 = (int*)malloc(sizeof(int) * n2);

    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    if(Func(arr1, arr2) == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}