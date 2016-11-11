#include <stdio.h> //Se incluye el archivo de cabecera que permita imprimir.
#include <time.h> // incluye la biblioteca relacionada con operaciones de fecha y hora
#include <stdlib.h> //Se inluye para usar srand() que genera números aleatorios.


int* arreglo_int(size_t num, int min, int max)
{
    srand(time(NULL)); //Instrucción que inicializa el generador de números aleatorios
    int *arreglo = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++){ 
        arreglo[i] = (rand() % (max + 1 - min)) + min; 
        
    }
    return arreglo; 
}


double* arreglo_double(size_t num, double min, double max)
{
    srand(time(NULL)); 
    double *arreglo = (double*) malloc(num * sizeof(double));
    for(int i = 0; i < num; i++)
    { 
        double cota = (max - min);
        if(cota != 0)
        {
            double maximo = RAND_MAX / cota;
            if(maximo != 0){
                double aleatorio = min + (rand() / maximo);
                arreglo[i] = aleatorio;  
            }
        }  
    }
    return arreglo; 
}
