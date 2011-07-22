//Exercise 1-12. Write a program that prints its input one word per line.
//Does not consider multiple tabs or spaces.


#include <stdio.h>

int main(){
int c;

while((c = getchar()) != EOF){
if(c == ' '){
printf("\n");}
else if(c == '\t'){
printf("\n");}
else putchar(c);}


}
