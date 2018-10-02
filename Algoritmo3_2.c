/*Introducir un entero y contar cuantos digitos tiene(no usar
funciones intrinsecas del lenguaje)*/
#include <stdio.h>
 
int main()
{
    int num,contador=1;
    printf("Introduce un numero entero: ");
    scanf("%d",&num);
 
    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
    printf("Tiene %d caracteres",contador);
}
    
