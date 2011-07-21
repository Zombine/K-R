//Informational stuff like purpose, date, authors, sources, etc.


//pre-processor directives and the like
#include <stdio.h> //Calls C standard Input Output
#include <stdlib.h> //and C standard library headers?


//Main function begins
int main() //removed argc, argv.
{
  
  printf("Hello World!\n\n"); /* Prints "Hello World!" to the console with two carriage returns... 
  the [\n] is an escape sequence used to create new lines and is not printed, you have to do something else to print "\n" */
  
  
  //Used to wait for user input before the console exits in WINDOWS console applications e.g. "press any key..."
  //  system("PAUSE");	 //NOT PORTABLE
  return 0; 
}
//Edited to compile with [-Wall -Wextra -pedantic -std=c99]
