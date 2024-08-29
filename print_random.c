//Given Project code
#include "random.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char randChar();
void rand_string(char* string, size_t size);
char* rand_string_alloc(size_t size);


int main(){
	srand(time(NULL));
	char* string = rand_string_alloc(7);	
	printf("\n%s\n", string);
	//printf("\nHello World");
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
