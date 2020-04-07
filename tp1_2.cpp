#include <stdio.h>
#include <stdlib.h>

int cuadrado(int var1);
void cuadrad(int var1);
void invertir(int uno,int dos);
void ordenar(int uno,int dos);
int main(){
    int resultado, var1,var2,uno,dos;
    printf("Ingrese un numero");
    scanf("%d",&var1);

    resultado=cuadrado(var1);
    printf("1) El cuadrado de %d es %d\n", var1,resultado);
    cuadrad(var1);
    printf("Ingrese un numero");
    scanf("%d",&var2);
    printf("Contenido de la variable: %d\n",var2);
    printf("Direccion de la variable:%p\n",&var2);
    printf("Ingrese el primer numero");
    scanf("%d",&uno);
    printf("Ingrese el segundo numero");
    scanf("%d",&dos);
    invertir(uno,dos);
    ordenar(uno,dos);
    scanf(" %c");
    return 0;
}
int cuadrado(int var1){
    int resul;
    resul=var1*var1;

    return resul;
}
void cuadrad(int var1){
    int result;
    result=var1*var1;
    printf("2) El cuadrado de %d es %d\n",var1,result);
}
void invertir(int uno,int dos){
    int aux;
    aux=uno;
    uno=dos;
    dos=aux;
    printf("Ahora el primer numero es: %d y el segundo: %d\n",uno, dos);
}
void ordenar(int uno,int dos){
    int aux;
    if (uno<dos)
    {
        printf("Primero: %d Segundo: %d\n",uno,dos);
    }else
    {
       printf("Primero: %d Segundo: %d\n",dos,uno);
    }
    
    
}