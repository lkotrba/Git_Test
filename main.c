#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char name [255]; 

	printf ("Zadejte sv� jm�no:"); 
	fgets (jm�no, 255, stdin); 
	printf ("length =% d \ n", strlen (name)); / * ladic� ��dek * / 
	jm�no [strlen (name) -1] = '\ 0'; / * odeberte nov� ��dek na konci * / 

	printf ("Hello% s! \ n", jm�no); 
	n�vrat 0; 
}