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
                //Poner las reglas de quién gana a quién.
            break;  
        }

    } while ( opcion != '5' );

    return 0;
}
