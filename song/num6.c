#include <stdio.h>

int main() {
    int num, cnt = 0;
    scanf("%d", &num);
    while (1) {
        if (num == 1) {
            printf("%d", num);
            cnt++;
            break;
        }
        if(num % 2 == 1) {
            printf("%d ", num);
            num = (num*3)+1;
            cnt++;
        } else if(num % 2 == 0) {
            printf("%d ", num);
            num = num / 2;
            cnt++;
        }
        printf("- ");
    }

    printf("\n");
    printf("우박수의 길이는 %d이다.\n", cnt);
    return 0;
}
