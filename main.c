#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char name [255]; 

	printf ("Zadejte sv� jm�no:"); 
	fgets (jm�no, 255, stdin); 

	printf ("Hello% s! \ n", jm�no); 
	n�vrat 0; 
}