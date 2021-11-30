#include <stdio.h>

int main() {
    int a, i, j;
    scanf("%d",&a); //정수형 변수 a에 정수를 입력받습니다.
    i=2;
    j=a-1;

    if(a==1){
        printf("소수아님");
        return 0;
    }
    
    while(1){ //무한루프
        if(i<=j){
            if(a%i==0){ //i가 나누어떨어지면 소수가 아님
                printf("소수아님");
                break;
            }else{
                i++;
            }
       }else{
            printf("소수");
            
            break;
        }
    }
    return 0;
}
