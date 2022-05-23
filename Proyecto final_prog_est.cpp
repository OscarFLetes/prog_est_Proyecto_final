/* Autor:Oscar Eduardo FLetes Ixta, 16/05/22
	hacer un programa de control de extintores de fuego en UVM
	Debe tener el siguiente menu:
		-0.Salir
		1.Agregar extintor
		2.Listar todos los extintores
		3.Listar Exintores de un edificio especifico
		4.Listar Extintores de una fecha especifica
		5.Listar Extintores de un tipo especifico
		6.Recargar Extintor
		7. Guardar Archivo
		8. Cargar Archivo
		
	Programa en lenguaje c que hace un registro de extintores de fuego para tener uncontrol de ellos en la UVM, la cual el menu tiene como opciones, 
	agregar extintor,Listar todos los extintores, Listar Exintores de un edificio especifico, Listar Extintores de una fecha especifica, Listar Extintores de un tipo especifico,
	Recargar Extintor, Guardar Archivo, y Cargar archivo, con el uso de estructuras, funciones, prototipos de funciones, switch, uso de milibreria.h, stdlib.h, string.h, macros,
	cilos for, ciclo do-while, uso de switch y condiciones 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo char, float, int
		* Uso de gaurdar el archivo de tipo .txt
		* Uso de estrcturas
		* Uso de condiciones
		* Uso de la libreria String.h
		* Uso de la libreria stdlib.h
		* Funciones para cadenas de caracteres
		* Funciones con parametros
		* Prototipos de funciones
		* Uso de milibreria.h para validacion de datos
		* Ciclo do-while
		* Ciclos for
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables char, float y int, condiciones, uso de la libreria string, milibreria.h, stdlib.h, funciones para cadenas de caracteres, uso de funciones con parametros, 
	prototipos de funciones, ciclo do-while, ciclos for, e imprimir la informacion.

	Breve descripcion:
	El programa  pide como entrada un menu que tiene como opciones, 
		* Agregar extintor
		* Listar todos los extintores
		* Listar Exintores de un edificio especifico
		* Listar Extintores de una fecha especifica
		* Listar Extintores de un tipo especifico
		* Recargar Extintor
		* Guardar Archivo
		* Cargar Archivo
	Al seleccionar la opcon 1(agregar) pide 5 variable del tipo char, char, char, int, int(tipo de extintor, edificio, area, mes y año), se insertan los datos, y ya se puede realizar lo demas del menu
	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include<stdlib.h>//libreria para prototipos de funciones, codigo ascii, entre otras mas funciones
#include "milibreria.h"//libreria que se creo para valdiar datos
#include<string.h>//libreria para uso de funciones para cadenas de caarcteres
//Declaracones globales 
#define MAX 20//macros

struct extintor{//uso de estrcturas
	char tipo[2];//variable de cadenas de 2 caracteres 
	char edificio[2];//variable de cadenas de 2 caracteres 
	char area[25];//variable de cadenas de 25 caracteres 
	int mes;//variable ccon enteros
	int anio;//variable con enteros
};

//variable global
int e=0; //variable que dice cuantos alumnos hay en el arreglo
//Prototipos
int menu();//funcion 
void agregar(struct extintor x[]);//funcion 
void imprimir(struct extintor x[], int selec);//funcion 
void listedificio(struct extintor x[]);//funcion 
void listfecha(struct extintor x[]);//funcion 
void listtipo(struct extintor x[]);//funcion 
void recargar(struct extintor x[]);//funcion 
void guardar(struct extintor x[]);//funcion 
void cargar(struct extintor x[]);//funcion 
int main(){
	int opcion;//variable con enteros
	struct extintor grupo[MAX];//llamamos a la estructura del extintor
	do{
		opcion=menu();//llamamos a la opcin menu 
		switch(opcion){//switch
			case 0: printf("Nos vemos...\n");//imprime mensaje
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 1: agregar(grupo);//ejecuta la funcion agregaer con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 2: imprimir(grupo,0);//ejecuta la funcion imprimir todos los alumnos con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 3: listedificio(grupo);//ejecuta la funcion imprimir los extintores del edificio que se inserte con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 4: listfecha(grupo);//ejecuta la funcion listar los extintores por la fecha insertado consis parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 5: listtipo(grupo);//ejecuta la funcion listar los extintores por el tipo de extintor insertado con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 6: recargar(grupo);//ejecuta la funcion para recargar los extintores con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 7: guardar(grupo);//ejecuta la funcion guardar archivo con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
			case 8: cargar(grupo);//ejecuta la funcion ordenar por nombre con sus parametros
					break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
		}
	}while(opcion!=0);//do-while termina cuando se inserta un numero diferente de 0
	return 0;
}

int menu(){
	int opcion;//variable con enteros
	printf("-----------MENU PRINCIPAL-----------\n");//imprime mensaje
	printf("0. Salir\n");//imprime mensaje
	printf("1. Agregar extintor\n");//imprime mensaje
	printf("2. Listar todos los extintores\n");//imprime mensaje
	printf("3. Listar Exintores de un edificio especifico\n");//imprime mensaje
	printf("4. Listar Extintores de una fecha especifica\n");//imprime mensaje
	printf("5. Listar Extintores de un tipo especifico\n");//imprime mensaje
	printf("6. Recargar Extintor\n");//imprime mensaje
	printf("7. Guardar Archivo\n");//imprime mensaje
	printf("8. Cargar Archivo\n");//imprime mensaje//imprime mensaje
	printf("------------------------------------\n");//imprime mensaje
	opcion=leerd("Selecciona una opcion: ",0,8);//valida que el menu solo acepte de 0-8
	return opcion;
}

void agregar(struct extintor x[]){//funcion agregar extintor(parametros)
	int pregunta;//variable con enteros
	while(e<MAX){//ciclo while para almacenar los extintores y que sean menores a MAX
		leers("Tipo de extintor: ",x[e].tipo,2);//Validacion de caracteres maximo 2 caracteres
		leers("Edificio: ",x[e].edificio,2);//Validacion de caracteres maximo 2 caracteres
		leers("Area: ",x[e].area,25);//Validacion de caracteres maximo 2 caracteres
		x[e].mes=leerd("Mes: ",1,12);//Validacion del mes 1-12
		x[e].anio=leerd("Año: ",2021,2026);//Validacion del año del 2021-2026
		pregunta=leerd("Agregar otro extintor? (1-si, 0-no): ",0,1);
		e++;//contador
		if(pregunta==0){//condicion, si pregunta es igual a 0 se termina el while
			break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
		}
	}
	if(e==MAX){//condicon, si n es igual a max
		printf("Arreglo lleno!!!\n");//imprime mensaje
		system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla
	}
}

void imprimir(struct extintor x[], int selec){//funcion imprimir todos los extintores(parametros)
	char mensaje[35];//variable de cadenas de 35 caracteres
	switch(selec){
		case 0: strcpy(mensaje,"TOTALES          ");// si tipo es igual 0 copia el texto totales 
				break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
		case 1: strcpy(mensaje,"EDIFICIO DE LOS  ");// si tipo es igual 1 copia el texto edificio de los
				break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
		case 2: strcpy(mensaje,"FECHA DE LOS     ");// si tipo es igual 2 copia el texto fecha de los...
				break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
		case 3: strcpy(mensaje,"TIPO DE LOS      ");// si tipo es igual 3 copia el texto tipo de los..
				break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
	}
	printf("EXTINTORES %S--------------------------------------------------------------\n",mensaje);//imprime mensaje
	printf("\nNo.\tTIPO\tEDIFICIO\tAREA   \t\t\tMES\tAÑO\n");//imprime mensaje
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	
	for(int i=0;i<e;i++){//ciclo for para recorrer todos los arreglos	
		printf("%2d\t%-2s\t%-2s\t\t%-25s%2d\t%4d\n",i+1,x[i].tipo,x[i].edificio,x[i].area, x[i].mes, x[i].anio);//imprime el numero del exintor, el tipo, el edificio, el area,mes, año	
	}
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla		
}

void listedificio(struct extintor x[]){//funcion listar los extintores del edificio insertado(parametros)
	int i=0;//variable con enteros
	char edi[2];//variable de cadenas de 2 caracteres 
	int buscar=0;//variable con enteros
	leers("¿De que edificio quieres listar los extintores? \n ",edi,2);//Validacion de caracteres maximo 2 caracteres
	printf("EXTINTORES\n");//imprime mensaje
	printf("\nNo.\tTIPO\tEDIFICIO\tAREA   \t\t\tMES\tAÑO\n");//imprime mensaje
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	for(int i=0;i<e;i++){//ciclo for para recorrer todos los arreglos 
				if(strcmp(edi,x[i].edificio)==0){//condicion para que compare las cadenas edi, y x[i].edificio
					buscar=1;//es para saber si la busqueda fue realizada con exito
					printf("%2d\t%-2s\t%-2s\t\t%-25s%2d\t%4d\n",i+1,x[i].tipo,x[i].edificio,x[i].area, x[i].mes, x[i].anio);//imprime el numero del exintor, el tipo, el edificio, el area,mes, año
				}			
	}if(buscar==0){//condicio, que si buscar es igual a 0
		printf("Extintor no encontrado!!!\n");//imprime mensaje
	}	
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla
}

void listfecha(struct extintor x[]){//funcion listar los extintores por la fecha insertado(parametros)
	int i=0;//variable con enteros
	int mes;//variable con enteros
	int fecha;//variable con enteros
	int buscar=0;//variable con enteros
	printf("¿De que fehca buscas el extintor? \n ");//imprime mensaje
	mes=leerd("Mes: ",1,12);//Validacion del mes 1-12
	fecha=leerd("Año: ",2021,2026);//Validacion del año del 2021-2026
	printf("EXTINTORES\n");//imprime mensaje
	printf("\nNo.\tTIPO\tEDIFICIO\tAREA   \t\t\tMES\tAÑO\n");//imprime mensaje
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	for(int i=0;i<e;i++){//ciclo for para recorrer todos los arreglos
				if(mes== x[i].mes && fecha == x[i].anio){//condicion si mes es igual a x[i].mes y si fecha es igual a x[i].anio
					buscar=1;//es para saber si la busqueda fue realizada con exito
					printf("%2d\t%-2s\t%-2s\t\t%-25s%2d\t%4d\n",i+1,x[i].tipo,x[i].edificio,x[i].area, x[i].mes, x[i].anio);//imprime el numero del exintor, el tipo, el edificio, el area,mes, año
				}		
	}
	if(buscar==0){//condicio, que si buscar es igual a 0
		printf("Extintor no encontrado!!!\n");//imprime mensaje
	}	
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla
}

void listtipo(struct extintor x[]){//funcion listar los extintores por el tipo de extintor insertado(parametros)
	int i=0;//variable con enteros
	char tip[2];//variable de cadenas de 2 caracteres 
	int buscar=0;//variable con enteros
	leers("¿De que tipo buscas el extintor? \n ",tip,2);//Validacion de caracteres maximo 2 caracteres
	printf("EXTINTORES\n");//imprime mensaje
	printf("\nNo.\tTIPO\tEDIFICIO\tAREA   \t\t\tMES\tAÑO\n");//imprime mensaje
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	for(int i=0;i<e;i++){//ciclo for para recorrer todos los arreglos
				if(strcmp(tip,x[i].tipo)==0){//condicion para que compare las cadenas tip, y x[i].tipo
					buscar=1;//es para saber si la busqueda fue realizada con exito
					printf("%2d\t%-2s\t%-2s\t\t%-25s%2d\t%4d\n",i+1,x[i].tipo,x[i].edificio,x[i].area, x[i].mes, x[i].anio);//imprime el numero del exintor, el tipo, el edificio, el area,mes, año
				}			
	}
	if(buscar==0){//condicio, que si buscar es igual a 0
		printf("Extintor no encontrado!!!\n");//imprime mensaje
	}	
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla
}

void recargar(struct extintor x[]){//funcion para recargar los extontores(parametros)
	int i=0;//variable con enteros
	int num;//variable con enteros
	int buscar=0;//variable con enteros
	
	for(int i=0;i<e;i++){//ciclo for para recorrer todos los arreglos
		printf("¿Que numero de extintor buscas? \n ");//imprime mensaje
		num=leerd("Numero: ",1,20);//Validacion del numero 1-20
		printf("EXTINTORES\n");//imprime mensaje
		printf("\nNo.\tTIPO\tEDIFICIO\tAREA   \t\t\tMES\tAÑO\n");//imprime mensaje
		printf("---------------------------------------------------------------------------\n");//imprime mensaje
		if(num,i){//condicion, si num esta en la pisicion i
			buscar=1;//es para saber si la busqueda fue realizada con exito
			printf("%2d\t%-2s\t%-2s\t\t%-25s%2d\t%4d\n",i+1,x[i].tipo,x[i].edificio,x[i].area, x[i].mes, x[i].anio);//imprime el numero del exintor, el tipo, el edificio, el area,mes, año
			printf("¿Cual es la fecha de recarga?\n");//imprime mensaje
			x[i].mes=leerd("Mes: ",1,12);//Validacion del mes 1-12
			x[i].anio=leerd("Año: ",2021,2026);//Validacion del año del 2021-2026
			break;//Es para que termine la iteraccion en ejecucucion y volver al principio, para realizar otra iteraccion
		}
	}
	if(buscar==0){//condicio, que si buscar es igual a 0
		printf("Extintor no encontrado!!!\n");//imprime mensaje
	}	
	printf("---------------------------------------------------------------------------\n");//imprime mensaje
	system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla
}


void guardar(struct extintor x[]){//funcion guardar archivo(parametros)
	FILE*f;//variable para archivos
	f=fopen("Extintores.txt","w");//abre y guarda el archivo en modo write(w)
	//verificar si se guardo correctamente el archivo
	if(f==NULL){//condicon, si f es igual a null
		printf("Error al intentar guardar los datos!!!\n");//imprime mensaje
	}
	else{//de lo contrario...
		for(int i=0;i<e;i++){//ciclo for para acumular los datos de los extintores insertados
			fprintf(f,"%s\t%s\t%s\t%d\t%d\n",x[i].tipo,x[i].edificio,x[i].area, x[i].mes, x[i].anio);//guarda los datos
		}
		fclose(f);//cierra el archivo
		printf("---->Se guardaron %d registros\n",e);//imprime cuantos registros de guardaron 
	}
	system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla 
}

void cargar(struct extintor x[]){//funcion cargar archivo(parametros)
	FILE*f;//variable para archivos
	struct extintor a;//estrucutura del extintor
	f=fopen("Extintores.txt","r");//abre el archivo en modo read (r)
	e=0;//declarar variable e
	//verificar si se abrio correctamente el archivo
	if(f==NULL){//condicon, si f es igual a null
		printf("Error al intentar cargar los datos!!!\n");//imprime mensaje
	}
	else{//de lo contrario...
		printf("Leyendo......\n");//imprime mensaje
		//ciclo while
		while(fscanf(f,"%s\t%s\t\t%25[^\t]%d\t%d",a.tipo,a.edificio,a.area, &a.mes, &a.anio)!=EOF){//leer los resgitros hasta llegar al utimo caracter
			//EOF caracter final del archivo
			x[e]=a;//x en el arreglo e es igual a la estructura del extintor a
			e++;//cuenta a los extintores
			printf("%3d\t%-2s\t%-2s\t\t%-25s%2d\t%4d\n",e,a.tipo,a.edificio,a.area, a.mes, a.anio);//imprime el numero del exintor, el tipo, el edificio, el area,mes, año 
		}
		fclose(f);//cierra archivo
		printf("---->%d registros leidos\n",e);//imprime los registros leidos 
	}
	system("PAUSE");//pausa el programa, se reanuda dando clic en cualquier tecla
}


