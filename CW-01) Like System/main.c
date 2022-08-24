#include <stdlib.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite


/*[]                              -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"*/

void *likes(size_t n, const char *const names[n]);
char * getArraySize(char * array[]);

int main(){
	// string = char* ou char[]
/*	char* names[] = {"peter", "Jacob", "Mark", "Max", "Wilson"};

	 likes(5, names);	
	 */
	 
	 char* names[] = {"peter", "Jacob", "Mark", "Max", "Wilson"};
	 
	 printf(getArraySize(names));
	
}
void *likes(size_t n, const char *const names[n]) {
    //  <----  hajime!
  if (n == 0){
  	printf("No one likes this!");
  }
  if (n == 1){
  	printf("%s likes this", names[0]);
  }
  if (n == 2){
  	printf("%s and %s like this", names[0], names[1]);
  }
  if (n == 3){
  	printf("%s, %s and %s like this", names[0], names [1], names [2]);
  }
  if (n >= 4) {
  	printf("%s, %s and %d others like this", names[0], names[1], n - 2);
  } 
}


char* getArraySize(char * array[]){
	
	printf("%d", array[5] == NULL);
	
	return "";
	
	
}

