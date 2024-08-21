#include<stdio.h>

int somainteiro (int a, int b, int c);

int main()
{ //var
	int a=0, b=0, c=0, R=0;
	printf("digite os numeros\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	R = somainteiro(a,b,c);
	printf("a soma eh %d", R);


	return(0);
}

int somainteiro (int a, int b, int c)
{
	int resultado = 0;
 	resultado = a+b+c;
	return (resultado);
}