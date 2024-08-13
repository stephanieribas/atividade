#include <stdio.h>
 
int main() {
    
    double area = 0, PI = 3.14159, r = 0;
 
    scanf("%lf",&r);
    
    area = PI*(r*r);
    
    printf("A=%.4lf\n", area);
 
    return 0;
}