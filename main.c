#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char first [255], last [255]; 

	printf ("Zadejte své jméno:"); 
	fgets (first, 255, stdin); 
	first [strlen (first) -1] = '\ 0'; / * odstranit nový øádek na konci * / 

	printf ("Nyní zadejte své pøíjmení:"); 
	dostane (poslední); /* pøeteèení zásobníku? co je to? * / 

	printf ("Ahoj% s% s! \ n", první, poslední); 
 	návrat 0; 
}