#include <stdio.h>

int main() {
    int a, b, c, x, y;
    int price = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
    
    if(a + b < c * 2)
        price = (a * x) + (b * y);
    else {
        if(x < y) {
            price += c * 2 * x;
            price += (y - x) * b;
            
            if(price > c * 2 * y)
                price = c * 2 * y;
        } else {
            price += c * 2 * y;
            price += (x - y) * a;
            
            if(price > c * 2 * x)
                price = c * 2 * x;
        }
    }
    
    printf("%d", price);
    return 0;
}
