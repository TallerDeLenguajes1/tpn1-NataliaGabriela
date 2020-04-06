#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int var1=5, *p_var,tama;
    p_var=&var1;
    printf("Contenido del Puntero: %p\n", p_var);
    printf("Direccióm de memoria almacenada: %p\n", p_var);
    printf("Dirección de memoria de la variable: %p\n", &var1);
    printf("Dirección de memoria del puntero: %p\n", &p_var);
    tama=sizeof(var1);
    printf("Tamaño: %d\n",tama);

    scanf(" %c");
    return 0;
}