//1-5 fahrenheit to celsius table in reverse order

#include <stdio.h>
#include <stdlib.h>
//Function main begins.
int main(int argc, char *argv[])
{
  
  //variable declaration
  int fahrenheit;
  //prints table header
  printf("Static fahrenheit to celsius conversion table in reverse order:\n\n");
  //Initializes var "fahrenheit" as 300, if fahrenheit is greater than or equal to 0, loop does fahrenheit -20 
  for (fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20)
  //Prints a 3 space decimal(base 10) value equal to fahrenheit, prints a 6 space floating point (fraction) value with only one number after the decimal place equal to (5.0/9.0)*(fahrenheit-32) ?? 
      printf("%3d fahrenheit is about %6.1f celsius\n", fahrenheit, (5.0/9.0)*(fahrenheit-32));

      
  //Tells the user how to interact with "getchar();"
  printf("\n\nPress [ENTER] to exit.");
  //Waits for the user to hit [ENTER] before exiting the console.
  getchar();

  //system("PAUSE");	<------------- not portable.
  return 0; //returns zero.
}
