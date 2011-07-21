//Chapter one, exercise eight; write a program to count blanks, newlines, and tabs.

//includes
#include <stdio.h>


//main begins
int main()

{
//declaring and initializing several variables
  int c,  blanks, tabs, newlines;

  blanks = 0;
  tabs = 0;
  newlines = 0;


//The variable "c" is initialized as the input of getchar, and if it is not equal to EOF the loop is continued.
  while((c = getchar()) != EOF){
    
	if (c == '\n')
	      ++newlines;

	 else if (c == '\t')
	    ++tabs;
	 else if (c == ' ')
	    ++blanks;
}
//Outputs information to the terminal
 printf("Counted number of carriage returns:");
 printf("%d\n", newlines);
 printf("Counted number of TABS:");
 printf("%d\n", tabs);
 printf("Counted number of SPACES:");
 printf("%d\n", blanks);



}
