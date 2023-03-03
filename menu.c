#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
//Variables
  int opciones;
  double n,r;
  int num,pot,poten;
//Menu 
do{
  printf("Menú de operaciones. \n");
  printf("[1] Determinar si un número es par o impar. \n");
  printf("[2] Elevar un número a una potencia. \n");
  printf("[3] Calcular la raíz cuadrada de un número. \n");
  printf("[4] Salir. \n");
  printf("Ingrese la opción a ejecutar: \n");
  scanf(" %d",&opciones);
  getchar();
    switch(opciones){
      case 1:
        printf("Par o impar: \n");
        printf("Ingrese el número a evaluar: \n");
        scanf("%d",&num);
          if(num%2==0)
            printf("El número ingresado es par. \n");
          else
            printf("El número ingresado es impar. \n");
      break;
      case 2:
        printf("Potencia de un número. \n");
        printf("Ingrese el número a potencia: \n");
        scanf("%d",&num);
        printf("Ingrese la potencia: \n");
        scanf("%d",&pot);
        if(num>=1 && pot>=0){
          poten = pow(num,pot);
          printf("EL resultado es: %d",poten);
        }
        else
          printf("El valor o valores ingresados es o son erróneos.");
      break;
      case 3:
        printf("Raíz cuadrada de un número. \n");
        printf("ingrese el número a sacarle su raíz cuadrada: \n");
        scanf("%lf",&n);
        if(n>=1){
          r = sqrt(n);
          printf("La raíz resultante es: %.2f",r);
        }
        else 
          printf("EL valor ingresado es erróneo. ");
      break;
      case 4:
        printf("Adios <3");
      break;
    default:
    printf("Ingresó un número o un carácter desconocido. \n");
  }
    
}
  while(opciones!=4);

  return 0;
}
