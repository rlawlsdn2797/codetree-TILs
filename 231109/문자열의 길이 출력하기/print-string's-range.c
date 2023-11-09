#include <stdio.h>
#include <string.h>

int main() {
    char str[103], str2[103];

    scanf("%s %s", str, str2);

    printf("%d", strlen(str) + strlen(str2));

    return 0;
}