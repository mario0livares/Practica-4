#include <stdio.h>
#include <math.h>

int main() {
//Variables
  float altura,base,area,perimetro;
  int opciones,lado1,lado2,lado3;
//Menu 
do{
  printf("Menú de operaciones. \n");
  printf("[1] Calcular el area de un triangulo. \n");
  printf("[2] Calcular el perimetro de un triangulo. \n");
  printf("[3] Conocer el tipo de triangulo que se forma. \n");
  printf("[4] Terminar programa. \n");
  printf("Ingrese la opción a ejecutar: \n");
  scanf(" %d",&opciones);
  getchar();
    switch(opciones){
      case 1:
        printf("ingresa la base: \n");
        scanf("%f",&base);
         printf("ingresa la altura\n");
         scanf("%f",&altura);
         area=(base*altura)/2;
         
         if(area>0)
            printf("su area es :%.2f\n",area);
         else
            printf("No se pudo generar el resultado.\n");
      break;
      case 2:
        printf("ingresa el primer lado del triangulo:\n");
        scanf("%d",&lado1);
        printf("ingresa el segundo lado del triangulo:\n");
        scanf("%d",&lado2);
        printf("ingresa el tercer lado del triangulo:\n");
        scanf("%d",&lado3);
        perimetro=lado1+lado2+lado3;
        if(perimetro>0)
            printf("su perimetro es :%.2f\n",perimetro);
         else
            printf("No es un triangulo.\n");
      break;
      case 3:
        printf("ingresa el primer lado del triangulo:\n");
        scanf("%d",&lado1);
        printf("ingresa el segundo lado del triangulo:\n");
        scanf("%d",&lado2);
        printf("ingresa el tercer lado del triangulo:\n");
        scanf("%d",&lado3);
        if(lado1==lado2&&lado1==lado3)
        {
        printf("\n El triangulo es equilatero\n");
        }
        else if(lado1==lado2||lado1==lado3||lado2==lado3)
        {
        printf("\n El triangulo es isosceles\n");
        }
        else if(lado1!=lado2&&lado1!=lado2&&lado2!=lado3)
        {
        printf("\n El triangulo es escaleno\n");
        }
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
