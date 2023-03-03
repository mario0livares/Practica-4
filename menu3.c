#include <stdio.h>
#include <math.h>

int main() {
//Variables
  int Carta,palo; 
  char opciones;
//Menu 
do{
  printf("Menu de operaciones. \n");
  printf("[A] Indicar si la carta pertenece a una baraja.\n");
  printf("[B] Indicar el valor de la carta de la forma A,2,3,...10,J,Q,K.\n");
  printf("[C] Indicar el palo de la carta de la forma corazon, diamante, espada, trebo. \n");
  printf("[D] Terminar programa.\n");
  printf("Ingrese la opcion a ejecutar: \n");
  scanf(" %c",&opciones);
  getchar();
    switch(opciones){
      case 'a':
      case 'A':
        printf(": Ingresa una carta en el rango del 1 al 13:\n");
        scanf("%d",&Carta);
         if(Carta>=1 && Carta<=13)
            printf("Si pertenece a la baraja.\n");
         else
            printf("No pertenece a la baraja.\n");
      break;
      case 'b':
      	case'B':
        printf("Ingresa el valor de la carta:\n");
        scanf("%d",&Carta);
        	if(Carta==1)
            	printf("Su carta vale A.\n");
         	else if(Carta>=2 && Carta <=10)
         		printf("Su carta vale %d \n",Carta);
         	else if(Carta==11)
         		printf("Su carta vale J\n");
         	else if(Carta==12)
         		printf("Su carta vale Q\n");
        	else if (Carta==13)
        		printf("Su carta vale K\n");
        	else
        		printf("No pertenece a la baraja\n");
      break;
      case 'c':
      	case 'C':
        	printf("ingresa el palo en el rango del 1 al 4\n");
        	scanf("%d",&palo);
       		if(palo==1)
       			printf("Corazon \n");
      	 	else 
       		if (palo==2)
       			printf("Diamante \n");
       		else
       		if(palo==3)
       			printf("Picas \n");
       		else
       		if(palo==4)
       			printf("Trebol \n");
       		else
       			printf("Este numero no es valido\n");
      break;
      case'd':
      	case 'D':
        	printf("Adios <3");
      break;
    default:
    		printf("Ingreso un numero o un caracter desconocido. \n");
  }
    
}
  while(opciones!='d' && opciones!='D');

  return 0;
}
