// Codigo en lenguaje C++ que solicita al usuario que ingrese un numero y verifica si es positivo, negativo o cero.



#include <stdio.h>

int main() {
    float num;
    
    printf("VERIFICAR SI UN NUMERO ES POSITIVO, NEGATIVO O CERO\n\n\n");
    
    // Solicitar Al Usuario Que Ingrese Un Numero
    printf("Ingrese Un Numero: \n");
    scanf("%f", &num);
    
    // Verificar Si El Numero Es Positivo, Negativo O Cero
    if (num > 0) {
        printf("\n\nEl Numero %.2f es Positivo.\n\n\n\n\n", num);
    } else if (num < 0) {
        printf("\n\nEl Numero %.2f es Negativo.\n\n\n\n\n", num);
    } else {
        printf("\n\nEl Numero es Cero.\n\n\n\n\n");
    }
    
    printf("30/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}
