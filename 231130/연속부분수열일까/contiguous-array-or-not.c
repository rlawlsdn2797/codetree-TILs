#include <stdio.h>

int main() {
    int n1, n2, arr1[103], arr2[103];

    scanf("%d %d", &n1, &n2);

    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < n1; i++) {
        int j;

        for(j = 0; j < n2; j++) {
            if(arr1[i+j] != arr2[j]) {
                break;
            }
        }

        if(j >= n2) {
            printf("Yes");
            return 0;
        }
    }

    printf("No");
    return 0;
}