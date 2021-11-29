#include <stdio.h>

int solution(int n, int m) {
    int sum = 0;
    for(int i = n; i <= m; i++) {
        if (i % 2 == 0) {
            sum += i*i;
        }
    }
    return sum;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int result = solution(n, m);
    printf("%d", result);
    return 0;
}
