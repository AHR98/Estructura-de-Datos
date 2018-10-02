/*Estructura de Datos
Leer una cantidad dada en pesos(número entero) y calcular a cuantos billetes de 1000,500,
100,50,20 y monedas de 10,5,1 peso equivalente. 
*/
#include <stdio.h>
int main()
{
	int n,m,q,c,f,v,d,o,u;
	printf("Escribe un numero entero: ");
	scanf("%d",&n);
	m=n/1000;
	q=n/500;
	c=n/100;
	f=n/50;
	v=n/20;
	d=n/10;
	o=n/5;
	u=n/1;
	printf("El numero %d equivale a %d billetes de 1000, a %d billetes de 500, a %d billetes de 100, a %d billetes de 50, a %d billetes de 20, a %d monedas de 10, a %d monedas de 5 y %d monedas de 1",n,m,q,c,f,v,d,o,u);
	
}
