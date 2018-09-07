/*
 * Este programa nos ayudara a saber el numero de decimales que hay
 * en pi dependiendo de el numero que nos de.
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * Fecha: 7 de septiembre de 2018
 */
#include <stdio.h>
#include <math.h> //Es para incluir una nueva función y las operaciones


int main() {
    //Variables para las operaciones
    int n;
    double pi=0;

    //Le preguntamos al usuario el numero de que quiere ver
    //con referencia a pi
    printf("Dame un numero:\n");
    scanf("%i", &n);

    //Operacion para sacar las variables de el numero
    //que el usuario nos proporciono para sacar en pi
    for(int k=0; k<=n; k++){
        pi+= pow(16,-k)*(4.0/ (8.0*k+1) - 2.0/(8.0*k+4.0) - 1.0/(8.0*k+5.0) - 1.0/(8.0*k+6.0));
    }

    //Con esto es para sacar los decimales en pi
    printf("%.*lf",n, pi);
    return 0;
}