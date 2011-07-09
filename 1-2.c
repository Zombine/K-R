//Trying [\*] where *  is a random charecter to try and find a new escape sequence....



#include <stdio.h> 
#include <stdlib.h> 


//Main function begins
int main(int argc, char *argv[]) 
{
  
  printf("Hello \f World!\n\n"); //Took me two tries to find a new sequence, and it made me snicker when I saw it.
  //Now how to actually use this...?
  printf("\fNidoran uses \"Bite\" It's not very effective\n\n");
  
  
  //Used to wait for user input before the console exits in WINDOWS console applications e.g. "press any key..."
  system("PAUSE");	 //NOT PORTABLE
  return 0; 
}
