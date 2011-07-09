#include <stdio.h>


int main(int argc, char *argv[])
{
  
  float fahrenheit, celsius, lower, upper, step; //Variable declarations, you have to declare them before use
  
  
  //Assignment statements
  lower = 0;
  upper = 300;
  step = 20;
  
  fahrenheit = lower;
  
        printf("Celsius to fahrenheit converter\n\n"); // Header for the table.
        
        
  //This is a [_____-test] loop
  while (fahrenheit <= upper) { 
        celsius = (5.0/9.0) * (fahrenheit-32.0);
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
        
        }
        
  
  //system("PAUSE");	//Still not portable
  printf("\n\n\nPress [ENTER] to exit...");//U MAD? *sigh* I miss my [RETURN] ;-;
  getchar(); //That's more like it.  There is probably an even better way to do it though
  return 0;
}
