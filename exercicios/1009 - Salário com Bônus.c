#include <stdio.h>
 
int main() {
 
    char joao[100];
    double total = 0.0, salariofixo = 0.0, totalvendas = 0.0; 
    
    scanf("%s\n" , &joao);
    scanf("%lf\n%lf\n", &salariofixo, &totalvendas);
    
    total = salariofixo + (totalvendas*0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}