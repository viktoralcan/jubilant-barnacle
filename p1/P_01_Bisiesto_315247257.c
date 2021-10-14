#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Lang(){  
	setlocale(LC_ALL, "spanish");
}

int Pantalla(){
	printf("Titulo:Bisiesto");
	printf("\n\nObjetivo:Determinar si el año es bisiesto");
	printf("\n\nIntegrantes:Alcantara Mendez Victor de Jesus\n\n");
	
	system("pause");
}

int A4(){
	int anhio;
	
	printf("\n\n¿Qué año deseas ingresar? ");
	scanf("%d",&anhio);
	if (anhio % 4 == 0)
      printf("\n%d es un año bisiesto\n\n", anhio);
   else
      printf("\n%d no es un año bisiesto\n\n", anhio);
}

int A100(){
	int anhio;
   	printf("\n\n¿Qué año deseas ingresar? ");
	scanf("%d",&anhio);
   		 if ((anhio % 4 == 0) && (anhio % 100!= 0))
      		printf("\n%d es un año bisiesto\n\n", anhio);
   		else
      		printf("\n%d no es un año bisiesto\n\n", anhio);
}

int A400(){
	int anhio;
   	printf("\n\n¿Qué año deseas ingresar? ");
	scanf("%d",&anhio);
   		 if (((anhio % 4 == 0) && (anhio % 100!= 0)) || (anhio %400 == 0))
      		printf("\n%d es un año bisiesto\n\n", anhio);
   		else
      		printf("\n%d no es un año bisiesto\n\n", anhio);
}

int main(){
	
	Lang();
	Pantalla();
	int opcion;

	do{

	printf("\n\tBienvenido a su calculador de año bisiesto\n");
	printf("\n1 - Calcular un año bisiesto por división entre 4");
	printf("\n2 - Calcular un año bisiesto por división entre 100");
	printf("\n3 - Calcular un año bisiesto por división entre 400");
	printf("\n4 - salir");
	printf("\n\nPor favor, introduzca la opción a elegir: ");
	scanf("%d",&opcion);

	switch (opcion){
		case 1:
			A4();
			system("pause");
			system("cls");
				break;
		case 2:
			A100();
			system("pause");
			system("cls");
				break;		
		case 3:
			A400();
			system("pause");
			system("cls");
				break;		
		case 4:
			printf("\nFin del programa\n");
				break;
				
		default:
			printf("\nEsta no es una opción válida");
			printf("\nPor favor, vuelva a elegir\n\n");
			system("pause");
			system("cls");
				break;
				
			}

		}while (opcion!=4);
	
		return 0;

	}
