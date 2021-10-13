#include <stdio.h>

void geometric() {
    static int num = 2;
    printf("%d ", num);
    num *= 2;
}

int main() {
    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        geometric();
    }
}
