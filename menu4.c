#include <stdio.h>
#include <math.h>

int main() {
//Variables
  int domino,domino1,dominosig,dominoant;
  char opciones;
//Menu 
do{
  printf("Menu de operaciones. \n");
  printf("[A] Indicar si la ficha pertenece a un domino de doble 6.\n");
  printf("[B] Indicar si la ficha es una mula y pertenece a un domino de doble 6.\n");
  printf("[C] Indicar qué ficha es la anterior a esta y cuál es la siguiente ficha.\n");
  printf("[D] Indicar qué ficha está en el renglón anterior y en el siguiente.\n");
  printf("[E] Terminar el programa.");
  printf("Ingrese la opcion a ejecutar: \n");
  scanf(" %c",&opciones);
  getchar();
    switch(opciones){
      case 'a':
      case 'A':
        printf("Ingresa la primera parte:\n");
        scanf("%d",&domino);
        printf("Ingresa la segunda parte.\n");
        scanf("%d",&domino1);
        if(domino>=1 && domino <=6)
        	if(domino1>=1 && domino1 <=6)
        	printf("pertenece al domino\n");
         	else
            printf("No pertenece al domino.\n");
        else
        printf("No pertenece al domino\n");
      break;
      case 'b':
      	case'B':
        printf("Ingresa la primera parte:\n");
        scanf("%d",&domino);
        printf("Ingresa la segunda parte:\n");
        scanf("%d",&domino1);
        	if(domino>=1 && domino <=6)
        		if(domino1>=1 && domino1 <=6)
        			if(domino==domino1)
        				printf("pertenece al domino y si es mula.\n");
         			else
           				printf("pertenece al domino, pero NO es mula.\n");
        		else
       				printf("No pertenece al domino\n");
       		else
       			printf("No pertenece al domino\n");
      break;
      case 'c':
      	case 'C':
        	 printf("Ficha anterior y siguente. \n");
                printf("Ingresa la primera parte:\n");
                scanf("%d",&domino);
                printf("Ingresa la segunda parte:\n");
                scanf("%d",&domino1);
        if(domino>=0 && domino<=6 && domino1>=0 && domino1<=6)
        {
          dominosig = domino+1;
          dominoant = domino-1;
          if(dominosig>=0 && dominosig<=6 && dominoant>=0 && dominoant<=6)
          {
            printf("La ficha anterior: %d / %d \n",dominoant,domino1);
            printf("La ficha ingresada: %d / %d \n",domino,domino1);
            printf("La ficha siguiente: %d / %d \n",dominosig,domino1);
          }
          else
            printf("No existe ficha anterior y/o siguiente. \n");
        }
        else
          printf("La ficha no pertenece al domino. \n");
      break;
      break;
      case 'd':
      	case 'D':
      	printf("ingresa la primera parte:\n");
      	scanf("%d",&domino);
      	printf("ingresa la segunga parte:\n");
      	scanf("%d",&domino1);
      	if(domino>=1 && domino <=6)
				
				if(domino==6&&domino==6)
        			printf("%d|%d %d|%d \n",domino,domino1-1,domino,domino1);        		
				else
					if(domino==5&&domino1==6)
						printf("%d|%d %d|%d \n",domino,domino1-1,domino,domino1);        		
					else
						printf("%d|%d %d|%d %d|%d \n",domino,domino1-1,domino,domino1,domino,domino1+1);        		
				else
        	printf("No pertenece al domino\n");
      	break;
      case'e':
      	case 'E':
        	printf("Adios <3");
      break;
    default:
    		printf("Ingreso un numero o un caracter desconocido. \n");
  }
    
}
  while(opciones!='d' && opciones!='D');

  return 0;
}
