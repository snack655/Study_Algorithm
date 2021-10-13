#include <stdio.h>

float find(float arr[8]) {
    float max = -2145983275.0;
    for(int i = 0; i < 8; i++) {
        max = max < arr[i] ? arr[i] : max;
    }
    return max;
}

int main() {
    float arr[8];
    float max;
    int i;
    for(i = 0; i < 8; i++) {
        scanf("%f", &arr[i]);
    }
    max = find(arr);
    printf("%.1f", max);
    return 0;
}
