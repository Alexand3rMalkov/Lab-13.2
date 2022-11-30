#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int move(char* H, int z);

int main() {
    char Name[30];
    char H[40] = "Hello  ";
    char a = ' ';
    system("chcp 1251");
    setlocale(LC_ALL, "rus");
    printf("Enter name: ");
    scanf("%s", &Name);

    strcat(H, Name);

    for (int i = 0; i < strlen(H); i++) {
        if (H[i + 1] == ' ') {
            a = H[i];
            H[i] = ' ';
            H[i + 1] = a;
            H[i+2] = move(H, i + 2);
    
        }
    
    }

    for (int i = 0; i < strlen(H); i++) {
        printf("%c", H[i]);
    }
}

int move(char* H, int z)
{
    int i;
    char a;
    for (i = strlen(H); z - 1 < i; --i) {
        H[i + 1] = H[i];
    }
    H[i+1] = ' ';
}