#include <stdio.h>

char chararray[] = "Hello encrypted world!";

void encrypt() {
    int i;
    char c;
    char str[50];
    for (i = 0; i < 50; i++) {
        c = chararray[i];
        if (c == ' ') {
            str[i] = c;
            continue;
        }
        if (c == '!') {
            str[i] = '\0';
            break;
        }
        str[i] = chararray[i] + 1;
    }
    printf("Encrypted string is '%s'\n", str);
}

void decrypt() {
    int i;
    char c;
    char str[50];
    for (i = 0; i < 50; i++) {
        c = str[i];
        if (c == ' ') {
            continue;
        }
        if (c == '\0') {
            break;
        }
        str[i] = str[i] - 1;
    }
    printf("Decrypt the string is '%s'\n", str);
}

int main(int argc, char **argv) {
    encrypt();
    decrypt();
}