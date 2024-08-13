#include <stdio.h>
 
int main() {
 
  int numf = 0, horastrab = 0;
  double valorhora = 0.0, salario = 0.0;
  
  scanf("%d\n%d\n%lf",&numf,&horastrab,&valorhora);
  salario = valorhora*horastrab;
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n",numf,salario);
  
    return 0;
}