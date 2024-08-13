#include <stdio.h>
 
 
   #define pesoa 3.5
   #define pesob 7.5
   
int main() {
 
   
   double a = 0.0, b = 0.0;
   double media = 0.0;
   
   scanf("%lf\n%lf" ,&a,&b);
   
   media = ((a*pesoa)+(b*pesob))/(pesoa+pesob);
   
   printf("MEDIA = %.5lf\n", media);
   
   
    return 0;
}