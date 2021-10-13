#include <stdio.h>

void cat(char h1[], char h2[]) {
    int cnt = 0;
    while (1) {
        if(h1[cnt++] == '\0')
            break;
    }
    h1[cnt++] = ' ';
    for(int i = 0; h2[i] != '\0'; i++)
        h1[cnt++] = h2[i];
}

int main() {
    char h1[50];
    char h2[50];
    gets(h1);
    gets(h2);
    cat(h1, h2);
    printf("%s\n", h1);
    return 0;
}
