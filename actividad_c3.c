#include <stdio.h>

int main() {
    // Crear array de notas
    int Notas[4][3] = {
    	{0,0,0},
        {30, 21, 45},
        {25, 44, 40},
        {22, 32, 18}
    };

    printf("Bienvenido al sistema de consulta de notas.\n");

    //Crear bucle infinito de while
    while (1) {
    	
        // Pedir numero de estudiante del 1-3
        int numEstudiante;
        printf("Ingrese su número de estudiante (1-3) o 0 para salir: ");
        scanf("%d", &numEstudiante);

        //Opcion de romper el bucle y terminar el programa
        if (numEstudiante == 0) {
            printf("Gracias por usar el sistema. ¡Hasta luego!\n");
            break;
        }

        //verificar si el numero de estudiante es valido para continuar
        if (numEstudiante < 1 || numEstudiante >= 4) {
            printf("Numero de estudiante no valido. Intentelo de nuevo.\n");
            continue;
        }

        //imprimir las notas 
        printf("Notas del estudiante %d: %d %d %d\n", numEstudiante,
               Notas[numEstudiante][0], Notas[numEstudiante][1], Notas[numEstudiante][2]);

        //imprimir la definitiva
        int definitiva = (Notas[numEstudiante][0] + Notas[numEstudiante][1] + Notas[numEstudiante][2]) / 3;
        printf("Definitiva del estudiante %d: %d\n", numEstudiante, definitiva);
    }

    return 0;
}
