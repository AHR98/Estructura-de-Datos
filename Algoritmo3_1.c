#include <stdio.h>
int main()
{
	int N,z,i;
	float p,ip,aux,aux2,suma;
	printf("Escribe hasta ue N terminos: ");
	scanf("%d",&N);
	aux=1.0;
	aux2=1.0;
	for(i=1;i<=N;i++)
	{
		
		if(i%2==0)//si es par
		{
			p=p-(1.0/aux);
			printf("%f\t\t",p);
			aux=aux*2;
		}
		else //es impar
		{
			ip=ip+(1.0/aux2);
			printf("%f\t\t",ip);
			aux2=aux2*2;
		}
		aux++;
		aux2++;
	}
	suma=p+ip;
	printf("\n\n%f",suma);
}
