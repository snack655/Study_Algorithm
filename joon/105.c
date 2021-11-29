#include <stdio.h>

int solution(int data[], double dl) {
    int result = 0;
    int sum = 0;
    double avg = 0;
    for (int i = 0; i < dl; i++)
        sum += data[i];
    avg = sum / dl;
    for (int i = 0; i < dl; i++) {
        if(data[i] < avg)
            result++;
    }
    return result;
}

int main() {
    double data_len;
    int data[1000] = {0, };
    scanf("%lf", &data_len);
    for (int i = 0; i < data_len; i++)
        scanf("%d", &data[i]);
    int result = solution(data, data_len);
    printf("%d\n", result);
    return 0;
}
