#include <stdio.h>
#include <string.h>

int main() {
    char h1[50];
    char h2[50];
    
    printf("h1 = ");
    scanf("%[^\n]", h1);// people\n
    getchar();
    printf("h2 = ");
    scanf("%[^\n]", h2);
    
    int size = strcmp(h1, h2);
    if (size > 0) {
        printf("%s", h1);
    } else if (size < 0) {
        printf("%s", h2);
    }else {
        printf("같다");
    }
    return 0;
}

