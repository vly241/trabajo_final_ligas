#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int a,num;

struct equ_baloncesto{

int perdidas_balon;
int rebote_balon;
char  mejor_anotador [40];
int  n_triplista;

};

struct equ_futbol{

  int goles_favor;
  int goles_contra;
  char goleador[30];
  int n_goleador;

};

struct bf{
  struct equ_baloncesto b_d;
  struct equ_futbol f_d;
char name_equipos[30];
int victorias;
int derrotas;
int empates;

}eq_balon[2],eq_fut[2];



void baloncesto_registro(int a){
  int m_Triple=0;
	int pun= 0;

	system("cls");
	struct bf baloncesto[a];
	int i,j;

	for (i = 0; i <a; i++) {
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
		printf("Ingrese la informacion del quipo %i--------------------------------------------------------------------------------\n",i+1);
    printf("\n");
		fflush(stdin);
    printf("\n");
		printf("Ingrese el nombre del equipo: \n");
		gets(baloncesto[i].name_equipos);
		fflush(stdin);
		printf("	Ingresa la cantidad de victorias:\n");
		scanf("%i",&baloncesto[i].victorias);
		fflush(stdin);
		printf("	Ingresa la cantidad de derrotas: \n");
		scanf("%i",&baloncesto[i].derrotas);


		printf("	Ingrese el numero de veces que se perdio el balon: \n");
		scanf("%i",&baloncesto[i].b_d.perdidas_balon);
		fflush(stdin);
		printf("	Ingrese la cantidad de rebotes recuperados \n");
		scanf("%i",&baloncesto[i].b_d.rebote_balon);
		fflush(stdin);
		printf("	Ingrese la cantidad de triples del mayor triplero \n");
		scanf("%i",&baloncesto[i].b_d.n_triplista);
		fflush(stdin);
		printf("	Cual es el nombre del triplero? \n");
		gets(baloncesto[i].b_d.mejor_anotador);
		system("cls");
	}
	
	for (i=0;i<a;i++)
	{
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
		printf("\t Informacion ingresada\n");
		printf("\tNombre del equipo #%i : %s\n",i+1,baloncesto[i].name_equipos);
		printf("	Cantidad de victorias: %i\n",baloncesto[i].victorias );
		printf("	Cantidad de derrotas : %i\n",baloncesto[i].derrotas );
		printf("	Cantidad perdidas del balon : %i\n",baloncesto[i].b_d.perdidas_balon);
		printf("	Cantidad de rebotes recuperados: %i\n",baloncesto[i].b_d.rebote_balon);
		printf("	Cantidad de triples del tripleador : %i\n",baloncesto[i].b_d.n_triplista);
		printf("	Nombre del triplero : %s\n",baloncesto[i].b_d.mejor_anotador);

	
		if (baloncesto[i].b_d.n_triplista  > m_Triple)
		{
			m_Triple    = baloncesto[i].b_d.n_triplista;

		  pun = i;
		}
	}
     printf("----------------------------------------------------------------------------------------------------------------------\n");
     printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\t	lista mejores triplistas\n\n");
	for (i =0 ; i < a;i++)
	{
		printf("	Equipo: %s triplero: %s numero de triples: %i\n",baloncesto[i].name_equipos,baloncesto[i].b_d.mejor_anotador,baloncesto[i].b_d.n_triplista);
		printf("\n");
	}

		printf("el mejor triplero de la liga : %s del equipo: %s \n anotaciones de triples [%i]\n",baloncesto[pun].b_d.mejor_anotador,baloncesto[pun].name_equipos,m_Triple);
    getch();
     printf("----------------------------------------------------------------------------------------------------------------------\n");
     printf("----------------------------------------------------------------------------------------------------------------------\n");
		system("cls");
		printf("tecla para  menu principal\n");
		getch();
		system("cls");
		menuprin();

}


void futbol_registro(){
  int m_gol=0;
	int pun = 0;

	system("cls");
  struct bf futbol[a];
	int i,j;

	for (i = 0; i < a; i++) {
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
		printf("\tIngrese la informacion para el equipo numero %i\n",i+1);

		fflush(stdin);
		printf("Ingrese el nombre del equipo: \n");
		gets(futbol[i].name_equipos);
		fflush(stdin);
		printf("	Ingresa la cantidad de victorias: \n");
		scanf("%i",&futbol[i].victorias);
		fflush(stdin);
		printf("	Ingresa la cantidad de empates: \n");
		scanf("%i",&futbol[i].empates);
		fflush(stdin);
		printf("	Ingresa la cantidad de derrotas: \n");
		scanf("%i",&futbol[i].derrotas);

		printf("\n");
		printf("	Ingresa la cantidad de goles a favor: \n");
		scanf("%i",&futbol[i].f_d.goles_favor);
		fflush(stdin);
		printf("	Ingresa la cantidad de goles en contra \n");
		scanf("%i",&futbol[i].f_d.goles_contra);
		fflush(stdin);
		printf("	Ingresa los goles del goleador \n");
		scanf("%i",&futbol[i].f_d.n_goleador);
		fflush(stdin);
		printf("	Cual es el nombre del goleador? \n");
		gets(futbol[i].f_d.goleador);
		system("cls");
	}
	printf("Informacion ingresada\n");
	for (j=0;j<a;j++)
	{
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
		printf("\tNombre del equipo #%i : %s\n",j+1,futbol[j].name_equipos);
		printf("	Cantidad de victorias: %i\n",futbol[j].victorias );
		printf("	Cantidad de empates  : %i\n",futbol[j].empates );
		printf("	Cantidad de derrotas : %i\n",futbol[j].derrotas );
		printf("	Cantidad de goles a favor : %i\n",futbol[j].f_d.goles_favor );
		printf("	Cantidad de goles encontra: %i\n",futbol[j].f_d.goles_contra );
		printf("	Cantidad de goles del goleador : %i\n",futbol[j].f_d.n_goleador );
		printf("	Nombre del goleador            : %s\n",futbol[j].f_d.goleador);
		getch();
	
		if (futbol[j].f_d.n_goleador  > m_gol)
		{
			m_gol    = futbol[j].f_d.n_goleador ;
			pun = i;
		}


	}
fflush(stdin);
	int e_gana=0;
  int y =0;
  int puntaje_g=0;

	for(i=0;i<a;i++)
	{
		if (futbol[i].victorias > e_gana)
		{
			e_gana = futbol[i].victorias;
			y=i;
		}
	}
	puntaje_g = (futbol[y].victorias *3) + futbol[y].empates;
	fflush(stdin);
  printf("----------------------------------------------------------------------------------------------------------------------\n");
  printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("El equipo ganador es: %s con [%i] puntos\n",futbol[y].name_equipos,puntaje_g);
	printf("el pos: %i\n",pun);
	printf("\tEl goleador de la liga es : %s \n\tgoles anotados [%i]\n",futbol[pun-1].f_d.goleador,m_gol);
	fflush(stdin);
  printf("----------------------------------------------------------------------------------------------------------------------\n");
  printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("tecla para  menu principal\n");
	getch();

	system("cls");
	menuprin();
}


void menuprin(){
  while(num!=3){
  printf("----------------------------------------------------------------------------------------------------------------------\n");
  printf("-----------------------------------------------------------------------------------------------------------------------\n");
  printf("--- BIENVENIDO para ingresar informacion-------------------------------------------------------------------------------\n");
  printf("------Ingrese un numero :----------------------------------------------------------------------------------------------\n");
  printf("---1.)baloncesto ------------------------------------------------------------------------------------------------------\n");
  printf("---2.)futbol-----------------------------------------------------------------------------------------------------------\n");
  printf("---3.)Cerrar el Programa.----------------------------------------------------------------------------------------------\n");
  printf("-----------------------------------------------------------------------------------------------------------------------\n");
  printf("-----------------------------------------------------------------------------------------------------------------------\n");

  scanf("%i",&num);
  switch(num){
case 1:
  system("cls");
  printf("numero de equipos\n");
  scanf("%i",&a);
baloncesto_registro(a);
  break;
case 2:
  system("cls");
  printf("numero de equipos\n");
  scanf("%i",&a);
futbol_registro(a);
  break;
case 3:
  system("cls");
  printf("fin proceso.\n");
  system("pause");

default:
  printf("...");
  break;
  }
  }
}
int main(){

menuprin();
  return 0;
}
