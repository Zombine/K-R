//Exercise 1-9... write a program to remove extra spaces.
//Also removes extra tabs, because I was bored
#include <stdio.h>

//begin function main
int main(){

  //Declaring variables "c", "extrablanks" and "extratabs"
 int c;
 int extrablanks;
 int extratabs;

//Initializing variables "extratabs" and "extrablanks" as 0
 extratabs = 0;
 extrablanks = 0;

//loop
  while((c = getchar()) != EOF){                            // Initializes c as the ?argument? returned from getchar, loops until reccieving EOF from terminal.
    if(c == ' '){                                           // if c is a [SPACE]
    if(extrablanks == 0){                                   // AND if extrablanks is equal to zero...
       extrablanks = 1;                                    // sets extrablanks to one
       putchar(c);}}                                       // and returns the input
   
    else if(c == '\t'){                                     // OR if c is equal to [TAB]
      if (extratabs == 0){                                  // AND extratabs is equal to zero...
       extratabs = 1;                                      // sets extratabs to one
       putchar(c);}}                                       // returns the input, if c is not equal to [SPACE] or [TAB] the first two IF  tests are closed.
   
    if(c != ' '){                                           // If c is NOT equal to [SPACE]
    if(c != '\t'){                                          // AND c is NOT equal to [TAB]...
       extrablanks = 0;                                    // sets extrablanks to zero
       extratabs = 0;                                      // sets extratabs to zero
       putchar(c);}}}                                      // returns input


}
