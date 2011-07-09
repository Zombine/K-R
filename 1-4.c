//Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
/* cor·re·spond·ing/?kôr??spändiNG/Adjective
1. Similar in character, form, or function.
2. Able to be matched, joined, or interlocked. */
//Somehow, I don't think this is what the book had in mind, but w/e
//>.>
#include <stdio.h>


int main(int argc, char *argv[])
{
  
  float fahrenheit, celsius, lower, upper, step; //Variable declarations
  
  
  //Assignment statements
  lower = -17.7;
  upper = 200;
  step = 20;
  
  fahrenheit = lower;
  
        printf("Celsius to fahrenheit converter\n\n"); //Table header
        
        
  //loop
  while (celsius <= upper) { 
        fahrenheit = (celsius * 9/5) + 32;
        printf("%6.1f\t\t%3.0f\n", celsius, fahrenheit);
        celsius = celsius + step;
        
        }
         

  printf("\n\n\nPress [ENTER] to exit...");
  getchar();
  return 0;
}
