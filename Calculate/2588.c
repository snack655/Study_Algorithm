#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int hund = b / 100;
    int ten = b % 100 / 10;
    int one = b % 100 % 10;
    
    printf("%d\n%d\n%d\n%d", a * one, a * ten, a * hund,
           (a*one) + ((a*ten)*10) + ((a*hund)*100));
    return 0;
}
