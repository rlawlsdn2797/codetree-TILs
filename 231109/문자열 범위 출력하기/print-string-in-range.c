#include <stdio.h>
#include <string.h>

int main() {
    char str[103];
    fgets(str, 256, stdin);

    for(int i = 2; i < 10; i++) {
        printf("%c", str[i]);
    }
    
    return 0;
}