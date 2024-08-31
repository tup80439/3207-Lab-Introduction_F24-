//Given Project code
#include "random.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char randChar();
void rand_string(char* string, size_t size);
char* rand_string_alloc(size_t size);


int main(){
	int a;
	/* seed the randomizer */
	srand( (unsigned)time(NULL) );
	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');
	return(0);
}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}
void rand_string(char* string, size_t size){
 	for(int i = 0; i < size; i++){
	        string[i] = randchar();
	}	
}
