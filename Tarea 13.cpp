#include <stdio.h>


int main(){
	
	int a[15];
	int v[15];
	int tam=0;
	int resta;
	int suma=0;
	int mat=0;	
	int i=0;
	int  opc;
	
	do{
		printf ("¿que operación quieres realizar? \n1.- Suma.\n2.-Resta \n3.-Salir\n");	
		scanf ("%i", &opc);
		switch (opc) { 
		case 1: 
			printf ("¿cuantos numeros quieres sumar? \n");
			scanf ("%d", &mat);
			for (i=1; i<=mat; i++){
				printf("Introduce un número: ");
				scanf ("%d", &a[i]);
				suma += a[i];
			}
			printf ("El total es: %d \n", suma);
			break; 
		case 2:  
			resta=0;
			printf("¿cuantos numeros quieres restar? ");
			scanf ("%d", &tam);
			for(i = 0; i<tam; i++){
				printf ("Introduce un número: ");
				scanf("%d",&v[i]);
			}
			resta=v[0];
			for(i=1;i<tam;i++){
				resta = resta-v[i];
			}
			printf ("El total es: %d\n", resta);
			
		} 
} while (opc != 3);
printf ("Fin del programa");
return 0;
}

