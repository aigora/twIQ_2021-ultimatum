#include <stdio.h>
#include <conio.h>

int main(){
	
	char letra,opcion;
	int n1,n2;
	
	printf( "\n   //// ULTIMATUM ////\n" );
	printf("Bienvenido jugador valiente.\n En este nueva version de piedra, papel o tijera con mas variantes podras experimentar un \n nuevo mundo de diversion.\n");
	printf("Decide que quieres hacer a continuacion:\n");

    do
    {
        printf( "\n   >>> MENU DEL JUEGO  <<<" );
        printf( "\n\n   1. J1 vs ORDERANDOR.");
        printf( "\n   2. J1 vs JUGADOR 2.");
        printf( "\n   3. RANKING.");
        printf( "\n   4. REGLAS.");
        printf( "\n   5. SALIR.\n" );

        do
        {
            printf( "\n   Introduzca opcion (1-5): ");
            fflush ( stdin );
            scanf( "%c", &opcion);
            
        }while ( opcion < '1' || opcion > '5' );

        switch ( opcion )
        {
                      
            case '1': 
            break;   
            case '2': 
            break;    
            case '3': 
				printf("\nRANKING\n");
		/*Aquí iría una tabla con los resultados de los jugadores*/
		/*if (J1 (puntos) > J2(puntos))
			printf("Jugador 1 gana a Jugador 2 con : %d %d), J1(puntos), J2(puntos));*/
            break;
			case '4': 
            			printf("En este juego a veces lo absurdo es superior a la realidad, no busques sentido a la logica porque ni nosotros\n lo sabemos, pero lo hemos intentado dar una explicacion.\n A continuacion te diremos que figura gana a quien y tratarle de dar una cierta logica.");
				printf("\n");
				printf("\n");
				printf("\nAire: 'Has invocado tifon, Dios del viento y de los huracanes, enemigo de Zeus y desterrado al tartaro por este mismo.'\n");
				printf("\n");
				printf("\nDiablo: 'Has invocado al principe de las tinieblas, rey del mal.¿Preparados para vender tu alma?'\n");
				printf("\n");
				printf("\nLobo: 'Has invocado a Fenrir, hijo de Loki y Angrboda, guardian del Valhalla.'\n");
				printf("\n");
				printf("\nArbol: 'Has convocado a Yggdrassil, el fresno del universo, arbol de la vida, el enlace entre los 9 reinos. Arbol del\nconocimiento.'\n");
				printf("\n");
				printf("\nEsponja: 'Has invocado a Bob Esponja heredero de la burguer cangreburguer, guardian del crustaceo crujiente.'\n");
				printf("\n");
				printf("\nPapel: 'Has invocado al papel de lija.'\n");
				printf("\n");
				printf("\nDragon: 'Shenlong el 'Dios Dragon' controlador de la lluvia y el viento. Concededor de deseos.'\n");
				printf("\n");
				printf("\nSerpiente: 'Has invocado a la Hidra de Lerna, la serpiente policefala y aliento venenoso a Hija de Tifon y Equidna,  madre de Quimera.¿Preparado para ser devorado?'\n");
				printf("\n");
				printf("\nPiedra: 'Has invocado a la piedra que mato al gigante Goliat'");
				printf("\n");
				printf("\nFuego: 'Has invocado a Amaterasu Okami diosa del sol y del fuego'\n");
				printf("\n");
				printf("\nTijera: 'Has invocado a las tijeras de sierra.'\n");
				printf("\n");
				printf("\nPistola: 'Has invocado al fusil Barret M82, el fusil de francotirador semiautomatico anti-material SARTS de calibre 50'\n");
            break;  
        }

    } while ( opcion != '5' );

    return 0;
}
