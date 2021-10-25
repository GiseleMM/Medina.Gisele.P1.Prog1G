#include <stdio.h>
#include <stdlib.h>
float aplicarAumento(float precio);
int main()
{
    /*
    1. Crear una función llamada aplicarAumento
     que reciba como parámetro el precio de un producto y devuelva
     el valor del producto con un aumento del 5%. Realizar la llamada desde el main. *
    */

    float aumento;
    aumento= aplicarAumento(5.5);


    printf("Aumento: %f",aumento);
    return 0;
}
float aplicarAumento(float precio)
{
    float Aumento;
    Aumento=(precio*0.5)+precio;
    return Aumento;
}
