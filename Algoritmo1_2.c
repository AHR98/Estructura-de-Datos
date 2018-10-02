#include <stdio.h>
int main()
{
	int dia,hora,min,seg,d,h,m,s,a,total;
	printf("Escribe cuantos dias: ");
	scanf("%d",&dia);
	printf("Escribe cuantas horas: ");
	scanf("%d",&hora);
	printf("Escribe cuantos minutos: ");
	scanf("%d",&min);
	printf("Escribe cuantos segundos: ");
	scanf("%d",&seg);
	
	d=dia*24; //dia en horas
	h=d+hora;	//suma total de horas
	m=h*60; //total de horas en segundos
	s=m+min; //suma total de segundos
	a=m*60;	//total de minutos a segundos
	total=seg+a;
	
	printf("Numero total de segundos es: %d",total);
	
}
