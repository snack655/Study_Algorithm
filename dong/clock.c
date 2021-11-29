#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", (16 * 60 * 2) * (n + 1) + (n >= 3 ? 3600 : 0) + (n >= 13 ? 3600 : 0) + (n >= 23 ? 3600 : 0));
    return 0;
}
