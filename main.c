#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char first [255], last [255]; 

	printf ("Zadejte sv� jm�no:"); 
	fgets (first, 255, stdin); 
	first [strlen (first) -1] = '\ 0'; / * odstranit nov� ��dek na konci * / 

	printf ("Nyn� zadejte sv� p��jmen�:"); 
	dostane (posledn�); /* p�ete�en� z�sobn�ku? co je to? * / 

	printf ("Ahoj% s% s! \ n", prvn�, posledn�); 
 	n�vrat 0; 
}