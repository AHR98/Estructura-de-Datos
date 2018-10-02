#include <stdio.h>
#include <math.h>
int main()
{
	int x,y;
	printf("Da una coordenada en (x,y): ");
	scanf("%d %d",&x,&y);
	if(x==0 || y==0)
	{
		printf("Está en el origen y esta a %d paso(s) y a %d paso(s)",x,y);
	}
	else if(x>0 && y>0)
	{
		x=fabs(x);
		y=fabs(y);
		printf("Esta en el primer cuadrante.\nCon %d paso(s) a la derecha y %d paso(s) arriba",x,y);
	}
	else if(x<0 && y>0)
	{
		x=fabs(x);
		y=fabs(y);
		printf("Esta en el segundo cuadrante.\nCon %d pasos(s) a la izquierda y %d paso(s) arriba",x,y);
	}
	else if(x<0 && y<0)
	{
		x=fabs(x);
		y=fabs(y);
		printf("Esta en el tercer cuadrante.\nCon %d paso(s) a la izquierda y %d paso(s) abajo",x,y);
	}
	else if(x>0 && y<0)
	{
		x=fabs(x);
		y=fabs(y);
		printf("Esta en el cuarto cuadrante.\nCon %d paso(s) a la derecha y %d paso(s) abajo",x,y);
	}
}
