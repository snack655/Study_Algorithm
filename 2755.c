#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    char className[100];
    int score;
    double pgrade, result = 0, totalScore = 0;
    char grade[3];
    
    for(int i = 0; i < num; i++) {
        scanf("%s %d %s", className, &score, grade);
        switch (grade[0]) {
            case 'A':
                pgrade = 4;
                if(grade[1] == '+')
                    pgrade += 0.3;
                else if(grade[1] == '-')
                    pgrade -= 0.3;
                result += pgrade * score;
                break;
                
            case 'B':
                pgrade = 3;
                if(grade[1] == '+')
                    pgrade += 0.3;
                else if(grade[1] == '-')
                    pgrade -= 0.3;
                result += pgrade * score;
                break;
                
            case 'C':
                pgrade = 2;
                if(grade[1] == '+')
                    pgrade += 0.3;
                else if(grade[1] == '-')
                    pgrade -= 0.3;
                result += pgrade * score;
                break;
                
            case 'D':
                pgrade = 1;
                if(grade[1] == '+')
                    pgrade += 0.3;
                else if(grade[1] == '-')
                    pgrade -= 0.3;
                result += pgrade * score;
                break;
                
            default:
                break;
        }
        totalScore += score;
        pgrade = 0;
    }
    printf("%.2lf", result / totalScore + 0.0001);
    return 0;
}

