#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int reemplazarCaracteres(char cadena[], int tamanioCadena, char caracterAReemplazar, char caracterQueVaAReemplazar);
float aplicarAumento(float precio);
int main()
{
    /*
    1. Crear una funci�n llamada aplicarAumento
     que reciba como par�metro el precio de un producto y devuelva
     el valor del producto con un aumento del 5%. Realizar la llamada desde el main. *
    */
    /*
    2. Crear una funci�n que se llame reemplazarCaracteres que reciba una
     cadena de caracteres como primer par�metro, un car�cter como segundo y
     otro car�cter como tercero, la misma deber� reemplazar cada ocurrencia
     del segundo
    par�metro por el tercero y devolver la cantidad de veces que se reemplazo
     ese car�cter en la cadena *
    */

    float aumento;
    aumento= aplicarAumento(6.5);
    char programacion[20]="Programcion";
    reemplazarCaracteres(programacion,20,'o','x');
    printf("%s",programacion);



    printf("\nAumento: %f\n",aumento);
    return 0;
}
float aplicarAumento(float precio)
{
    float Aumento;
    Aumento= precio+ (precio * 0.5);
    return Aumento;
}
int reemplazarCaracteres(char cadena[], int tamanioCadena, char caracterAReemplazar, char caracterQueVaAReemplazar)
{
    int cantidadReemplazos;
    int longitudDeCadena;

    cantidadReemplazos = -1;

    if (cadena != NULL)
    {
        cantidadReemplazos = 0;
        longitudDeCadena = strnlen(cadena, tamanioCadena);

        for (int i = 0; i < longitudDeCadena; i++)
        {

            if (cadena[i] == caracterAReemplazar)
            {
                cadena[i]=caracterQueVaAReemplazar;
                cantidadReemplazos++;
            }
        }
    }

    return cantidadReemplazos;
}
