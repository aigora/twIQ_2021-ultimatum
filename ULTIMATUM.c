#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct figuras{
	char nombre[30];
	int num;
};

int main(){
    char opcion;
    int J1, J2,num,numero,i,j;
    int ganar;
	
	//Enumeramos las figuras en un orden que hemos preestablecido
	struct figuras coleccion[15]={ {"Piedra",1}, {"Fuego",2}, {"Tijeras",3}, {"Serpiente",4}, {"Humano",5}, {"Arbol",6}, {"Lobo",7}, {"Esponja",8}, {"Papel",9}, {"Aire",10}, {"Agua",11}, {"Dragon",12}, {"Demonio",13}, {"Rayo",14}, {"Pistola",15} };
	
	char frase1[] = "En este juego a veces lo absurdo es superior a la realidad, no busques sentido a la logica porque ni nosotros\n lo sabemos, pero lo hemos intentado dar una explicacion.\n A continuacion te diremos que figura gana a quien y tratarle de dar una cierta logica.\n";
	char frase2[] = "\nAire: 'Has invocado tifon, Dios del viento y de los huracanes, enemigo de Zeus y desterrado al tartaro por este mismo.'\n";
	char frase3[] = "\nDiablo: 'Has invocado al principe de las tinieblas, rey del mal.Â¿Preparados para vender tu alma?'\n";
	char frase4[] = "\nLobo: 'Has invocado a Fenrir, hijo de Loki y Angrboda, guardian del Valhalla.'\n";
	char frase5[] = "\nArbol: 'Has convocado a Yggdrassil, el fresno del universo, arbol de la vida, el enlace entre los 9 reinos. Arbol del\nconocimiento.'\n";
	char frase6[] = "\nEsponja: 'Has invocado a Bob Esponja heredero de la burguer cangreburguer, guardian del crustaceo crujiente.'\n";
	char frase7[] = "\nPapel: 'Has invocado al papel de lija.'\n";
	char frase8[] = "\nDragon: 'Shenlong el 'Dios Dragon' controlador de la lluvia y el viento. Concededor de deseos.'\n";
	char frase9[] = "\nSerpiente: 'Has invocado a la Hidra de Lerna, la serpiente policefala y aliento venenoso a Hija de Tifon y Equidna,  madre de Quimera.Â¿Preparado para ser devorado?'\n";
	char frase10[] = "\nPiedra: 'Has invocado a la piedra que mato al gigante Goliat'\n";
	char frase11[] = "\nFuego: 'Has invocado a Amaterasu Okami diosa del sol y del fuego'\n";
	char frase12[] = "\nTijera: 'Has invocado a las tijeras de sierra.'\n";
	char frase13[] = "\nPistola: 'Has invocado al fusil Barret M82, el fusil de francotirador semiautomatico anti-material SARTS de calibre 50'\n";
	char frase14[] = "\nHumano: 'Has invocado al todopoderoso Napoleon, Emperador de Europa.'\n";
	char frase15[] = "\nAgua: 'Has invocado a las poderosas corrientes del triangulo de las Bermudas, responsable de gran cantidad de misteriosas desapariciones.'\n";
	char frase16[] = "\nRayo: 'Has invocado al arma más poderosa y destructiva de Zeus el Trueno'\n";
	
	printf( "\n   //// ULTIMATUM ////\n" );
	printf("Bienvenido jugador valiente.\n En este nueva version de piedra, papel o tijera con mas variantes podras experimentar un \n nuevo mundo de diversion.\n");
	printf("Decide que quieres hacer a continuacion:\n");

    do
    {
        printf( "\n   >>> MENU DEL JUEGO <<<");
        printf( "\n\n   1. J1 vs ORDENADOR");
        printf( "\n   2. RANKING");
        printf( "\n   3. REGLAS");
        printf( "\n   4. SALIR" );

        /* Filtramos la opción elegida por el usuario */
        do
        {
            printf( "\n   Introduzca opcion (1-4): ");
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '4' );
        /* La opción sólo puede ser '1', '2', '3' o '4'*/

        switch ( opcion )
        {
                      /* Opción 1: J1 vs ORDENADOR */
            case '1': printf("1.Piedra 2.Fuego  3.Tijera  4.Serpiente  5.Humano  6.Arbol  7.Lobo  8.Esponja  9.Papel  10.Aire  11.Agua  12.Dragon  13.Demonio  14.Rayo  15.Pistola\n");
                      j=0;
					  while(j<1) { //1 es el número de rondas que tiene cada partida.
                      	printf("Seleccione su figura J1 (Entre 1-15): "); 
                      	printf("(Si tu numero no está entre el rango indicado, seleccionaremos una figura por ti)\n");
						scanf("%d",&num);  
						for(i=1;i<15;i++){
							if(num==coleccion[i].num){
								printf("Su eleccion ha sido:"); 
								printf("%s\n",coleccion[i].nombre); 
							}
						}
						J1=abs(num)%15; // asegurarnos de que el numero escogido esta entre los elementos posibles.
						
						
			      			//int numero = rand () % (N-M+1) + M; (Este está entre M y N)
						srand(time(NULL));
						int numero = rand() % 14+1;
						for(i=1;i<15;i++){
							if(numero==coleccion[i].num){
								printf("EL todo poderoso ha seleccionado:"); 
                		    		printf("%s\n",coleccion[i].nombre); 
							}
							J2=numero;
						}
					
						printf("%d  vs %d\n", J1,J2);
						
						j++;
						
						// 
						ganar=(J1-J2);
						if(ganar==0){
							printf("HABEIS EMPATADO\n");
						}else if(ganar>=1 && ganar<=7||ganar>=-14 && ganar<=-8){
							printf("Gana el Todopoderoso. PIERDES\n");
						}else {
							printf("GANAS. Has ganado al Todopoderoso\n");
						}
					}
                      break;
                      /* Opción 2: RANKING */
            case '2': printf("\n ***ULTIMA PARTIDA GANADA*** \n");
     				  FILE*fentrada;
                      
					  int dato_ganar=0;
					  int dato_empatar=0;
					  int dato_perder=0;
                      
                      //1. Abrir el fichero
                      fentrada = fopen ("entrada.txt","r"); //Ruta relativa
					  
					  if(fentrada == NULL){
					  	printf("Error en la apertura de ficheros\n");
					  	return 0;
					  }
					  
					  //2. Leer el fichero -> fscanf (PASAMOS LOS DATOS DEL FICHERO A LA MEMORIA)
					  
					  fscanf(fentrada,"%d\n %d\n %d\n",&dato_ganar,&dato_empatar,&dato_perder);
					  
					  //3. Cerrar el fichero
					  
					  fclose(fentrada);
					 
					  if(J1==1 && J2>=2 && J2<=8){
					 	dato_ganar+=1;
					 } else if(J1==1 && J2>=9 && J2<=15){
					 	dato_perder+=1;
					 } else if(J1==1 && J2==1){
					 	dato_empatar+=1;
					 } else if(J1==2 && J2>=3 && J2<=9){
					 	dato_ganar+=1;
					 } else if(J1==2 && J2>=10 && J2<=1){
					 	dato_perder+=1;
					 } else if(J1==2 && J2==2){
					 	dato_empatar+=1;
					 } else if(J1==3 && J2>=4 && J2<=10){
					 	dato_ganar+=1;
					 } else if(J1==3 && J2>=11 && J2<=2){
					 	dato_perder+=1;
					 } else if(J1==3 && J2==3){
					 	dato_empatar+=1;
					 } else if(J1==4 && J2>=5 && J2<=11){
					 	dato_ganar+=1;
					 } else if(J1==4 && J2>=12 && J2<=3){
					 	dato_perder+=1;
					 } else if(J1==4 && J2==4){
					 	dato_empatar+=1;
					 } else if(J1==5 && J2>=6 && J2<=12){
					 	dato_ganar+=1;
					 } else if(J1==5 && J2>=13 && J2<=4){
					 	dato_perder+=1;
					 } else if(J1==5 && J2==5){
					 	dato_empatar+=1;
					 } else if(J1==6 && J2>=7 && J2<=13){
					 	dato_ganar+=1;
					 } else if(J1==6 && J2>=14 && J2<=5){
					 	dato_perder+=1;
					 } else if(J1==6 && J2==6){
					 	dato_empatar+=1;
					 } else if(J1==7 && J2>=8 && J2<=14){
					 	dato_ganar+=1;
					 } else if(J1==7 && J2>=15 && J2<=6){
					 	dato_perder+=1;
					 } else if(J1==7 && J2==7){
					 	dato_empatar+=1;
					 } else if(J1==8 && J2>=9 && J2<=15){
					 	dato_ganar+=1;
					 } else if(J1==8 && J2>=1 && J2<=7){
					 	dato_perder+=1;
					 } else if(J1==8 && J2==8){
					 	dato_empatar+=1;
					 } else if(J1==9 && J2>=10 && J2<=1){
					 	dato_ganar+=1;
					 } else if(J1==9 && J2>=2 && J2<=8){
					 	dato_perder+=1;
					 } else if(J1==9 && J2==9){
					 	dato_empatar+=1;
					 } else if(J1==10 && J2>=11 && J2<=2){
					 	dato_ganar+=1;
					 } else if(J1==10 && J2>=3 && J2<=9){
					 	dato_perder+=1;
					 } else if(J1==10 && J2==10){
					 	dato_empatar+=1;
					 } else if(J1==11 && J2>=12 && J2<=3){
					 	dato_ganar+=1;
					 } else if(J1==11 && J2>=4 && J2<=10){
					 	dato_perder+=1;
					 } else if(J1==11 && J2==11){
					 	dato_empatar+=1;
					 } else if(J1==12 && J2>=13 && J2<=4){
					 	dato_ganar+=1;
					 } else if(J1==12 && J2>=5 && J2<=11){
					 	dato_perder+=1;
					 } else if(J1==12 && J2==12){
					 	dato_empatar+=1;
					 } else if(J1==13 && J2>=14 && J2<=5){
					 	dato_ganar+=1;
					 } else if(J1==13 && J2<=6 && J2<=12){
					 	dato_perder+=1;
					 } else if(J1==13 && J2==13){
					 	dato_empatar+=1;
					 } else if(J1==14 && J2>=15 && J2<=6){
					 	dato_ganar+=1;
					 } else if(J1==14 && J2>=7 && J2<=13){
					 	dato_perder+=1;
					 } else if(J1==14 && J2==14){
					 	dato_empatar+=1;
					 } else if(J1==15 && J2>=1 && J2<=7){
					 	dato_ganar+=1;
					 } else if(J1==15 && J2>=8 && J2<=14){
					 	dato_perder+=1;
					 } else if(J1==15 && J2==15){
					 	dato_empatar+=1;
					 }
					  //4. Abrir el fichero para escritura
					  
					  fentrada = fopen("resultado.txt","w");
					  
					  if (fentrada == NULL){
					  	printf("Error en la apertura de ficheros\n");
					  	return 0;
					  }
					  
					  //5. Entrada desde la memoria al fichero
					  
					  fprintf(fentrada,"%d\n %d\n %d\n",&dato_ganar,&dato_empatar,&dato_perder);
					  
					  //6. Cerrar el fichero
					  
					  fclose(fentrada);
					  
					  printf("El jugador 1 lleva ganadas %d partidas\n",dato_ganar);
					  printf("El jugador 1 lleva empatadas %d partidas\n",dato_empatar);
					  printf("El jugador 1 lleva perdidas %d partidas\n",dato_perder);
                      break;

                      /* Opción 3: REGLAS */
            case '3':   printf("\n\n En este juego tu eliges cuantas veces te quieres enfrentar con el TODOPODEROSO. Para ello debes elegir la figura correcta y que la fuerza te acompañe.\n");
            			printf("\n\n -PERSONAJES-\n\n");
						printf( "%s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n", frase1,frase2,frase3,frase4,frase5,frase6,frase7,frase8,frase9,frase10,frase11,frase12,frase13,frase14,frase15,frase16); 
                      break;
        }

    } while ( opcion != '4' );

    return 0;
}
