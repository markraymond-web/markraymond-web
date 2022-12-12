#include <stdio.h> //libreria input output

int main()
{
	int i; //variabile per il ciclo
	int n; //lunghezza della parola che voglio tradurre nell'alfabeto di Morse
	char carattere; //il singolo carattere che va tradotto

	
	printf("***** ALFABETO MORSE *****\n\nDeveloped by Mark Raymond\n\n");
	printf("Metti il tuo messaggio\nP.S. Digita solo lettere dell'alfabeto, ne' numeri, ne' accenti");
	printf("\nP.P.S. Max 100 caratteri di messaggio");
	

	printf("\n\n\nIL TUO MESSAGGIO IN CODICE MORSE: \n");
	
	for(i=0; i<=100 ; i++)
	{
		scanf(" %c",&carattere);
		
		//I VARI CASI 
		if(carattere == 'a')	printf("._  \n");
		if(carattere == 'b')	printf("_... \n");
		if(carattere == 'c')	printf("_._. \n");
		if(carattere == 'd')	printf("_.. \n");
		if(carattere == 'e')	printf(".  \n");
		if(carattere == 'f')	printf(".._. \n");
		if(carattere == 'g')	printf("_ _. \n");
		if(carattere == 'h')	printf(".... \n");
		if(carattere == 'i')	printf("..  \n");
		if(carattere == 'j')	printf("._ _ _  \n");
		if(carattere == 'k')	printf("_._  \n");
		if(carattere == 'l')	printf(". _ ..  \n");
		if(carattere == 'm')	printf("_ _  \n");
		if(carattere == 'n')	printf("_.  \n");
		if(carattere == 'o')	printf("_ _ _  \n");
		if(carattere == 'p')	printf("._ _ .  \n");
		if(carattere == 'q')	printf("_ _ . _  \n");
		if(carattere == 'r')	printf("._.  \n");
		if(carattere == 's')	printf("...  \n");
		if(carattere == 't')	printf("_  \n");
		if(carattere == 'u')	printf(".._  \n");
		if(carattere == 'v')	printf("..._  \n");
		if(carattere == 'w')	printf("._ _  \n");
		if(carattere == 'x')	printf("_.._  \n");
		if(carattere == 'y')	printf("_._ _  \n");
		if(carattere == 'z')	printf("_ _..  \n");
		
		
	}
	
	printf("\n\nALGORITMO SVILUPPATO Dott. Mark Raymond 2022");
		return 0;
}
