#include <stdio.h> 
#include <string.h> 

int main (int argc, char ** argv) 
{ 
	char first [255], last [255]; 

	printf ("Zadejte své jméno:"); 
	fgets (first, 255, stdin); 
	first [strlen (first) -1] = '\ 0'; / * odstranit nový øádek na konci * / 
    
    printf ("Nyní zadejte své pøíjmení:"); 
	get (last); /* pøeteèení zásobníku? co je to? * / 

	printf ("Ahoj% s% s! \ n", first, last); 
 	retunn 0; 
>>>>>>> c21b5fc1bca19ccb37ea83f0e1f4a1fdd8312e2e
}