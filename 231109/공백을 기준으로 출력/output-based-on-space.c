#include <stdio.h>
#include <string.h>

int main() {
    char str[103], str2[103];

    fgets(str, 256, stdin);
    fgets(str2, 256, stdin);


    for(int i = 0; i < strlen(str) - 1; i++) {
        if(str[i] == ' ') {
            continue;
        }
        printf("%c", str[i]);
    }

    for(int i = 0; i < strlen(str2); i++) {
        if(str2[i] == ' ') {
            continue;
        }
        printf("%c", str2[i]);
    }

    return 0;
}