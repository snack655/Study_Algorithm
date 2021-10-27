#include <stdio.h>

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d", (12000 / a) * (c % a / b * b) + (c / a * b) + (c / a * b) + (c % b));
    return 0;
}
