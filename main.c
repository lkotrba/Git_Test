#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char first [255], last [255]; 

	printf ("Zadejte sv� jm�no:"); 
	fgets (first, 255, stdin); 
	first [strlen (first) -1] = '\ 0'; / * odstranit nov� ��dek na konci * / 
    
    printf ("Nyn� zadejte sv� p��jmen�:"); 
	get (last); /* p�ete�en� z�sobn�ku? co je to? * / 

	printf ("Ahoj% s% s! \ n", first, last); 
 	retunn 0; 
>>>>>>> c21b5fc1bca19ccb37ea83f0e1f4a1fdd8312e2e
}