#include <stdio.h>
#include <string.h>

void convertToHexFormat(const char *input) {
    int len = strlen(input);

    printf("Converted: ");
    for (int i = 0; i < len; i++) {
        printf("\\x%02x", input[i] & 0xFF);
    }

    printf("\n");
}

int main() {
    const char *input = "/lib64/ld-linux-x86-64";
    convertToHexFormat(input);

    return 0;
}
