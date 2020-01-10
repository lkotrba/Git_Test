#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char name [255]; 

	printf ("Zadejte své jméno:"); 
	fgets (jméno, 255, stdin); 
	printf ("length =% d \ n", strlen (name)); / * ladicí øádek * / 
	jméno [strlen (name) -1] = '\ 0'; / * odeberte nový øádek na konci * / 

	printf ("Hello% s! \ n", jméno); 
	návrat 0; 
}