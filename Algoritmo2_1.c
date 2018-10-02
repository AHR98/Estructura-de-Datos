/*Dado 3 numeros indicar cual de ellos es el mayor.*/
#include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Escribe 3 numeros: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf("%d es el mayor",n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("%d es el mayor",n2);
	}
	else if(n3>n2 && n3>n1)
	{
		printf("%d es el mayor",n3);
	}
}
