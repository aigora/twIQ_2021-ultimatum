#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct figuras { 
	char nombre[30]; 
	int num;  
}; 


int main(){
	
	int opcion;
	int i,j=0;
	int J1,J2,num,numero;
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
        printf( "\n   >>> MENU DEL JUEGO  <<<" );
        printf( "\n\n   1. J1 vs ORDERANDOR.");
        printf( "\n   2. RANKING.");
        printf( "\n   3. REGLAS.");
        printf( "\n   4. SALIR.\n" );

        do
        {
            printf( "\n   Introduzca opcion (1-4): ");
            fflush ( stdin );
            scanf( "%c", &opcion);
            
        }while ( opcion < '1' || opcion > '4' );

        switch ( opcion )
        {
                      
            case '1': 
		printf("1.Piedra 2.Fuego  3.Tijera  4.Serpiente  5.Humano  6.Arbol  7.Lobo  8.Esponja  9.Papel  10.Aire  11.Agua  12.Dragon  13.Demonio  14.Rayo  15.Pistola\n");
		while(j<20) { //20 es el número de rondas que tiene cada partida.
			printf("Seleccione su %d figura J1: ", j+1); 
			scanf("%d",&num);  
				for(i=0;i<15;i++) { 
					if(num==coleccion[i].num) { 
						printf("Su eleccion ha sido:"); 
						printf("%s\n",coleccion[i].nombre); 
					} 
					J1=num;
				} 			
				srand(time(NULL)); //El jugador 1 ha elegido su personaje
        			int numero = rand() % 16; //Elección aleatoria de la computadora
        			printf("La maquina ha seleccionado %d\n" ,numero);
		            	for(i=0;i<15;i++) { 
		                	if(numero==coleccion[i].num) { 
        		            		printf("EL todo poderoso ha seleccionado:"); 
                		    		printf("%s\n",coleccion[i].nombre); 
                			}
            			} 
				J2=numero;
            			printf("%d %d\n", J1,J2);
        			j++;
   			}		
           		 break;   
            case '2': 
		printf("\n ***RANKING*** \n");
            break;    
            case '3': 	
		printf( "%s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n", frase1,frase2,frase3,frase4,frase5,frase6,frase7,frase8,frase9,frase10,frase11,frase12,frase13,frase14,frase15,frase16); 
            break;
        }

    } while ( opcion != '4' );

    return 0;
}
