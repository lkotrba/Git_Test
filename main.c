#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char name [255]; 

	printf ("Zadejte své jméno:"); 
	fgets (jméno, 255, stdin); 

	printf ("Hello% s! \ n", jméno); 
	návrat 0; 
}