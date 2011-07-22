//word counting
// || means or, && means and.. these are evaluated left to right, and takes priority above or..
//wish I knew that earlier

//This seems to work just fine, except it should be telling the user how many of WHAT (output not formatted), oh and there are other special charecters that might mess it up?

#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(){

  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while((c = getchar()) != EOF){
    ++nc;
    if(c == '\n')
      ++nl;
    if(c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if(state == OUT){
      state = IN;
      ++nw;}}

  printf("%d %d %d\n", nl, nw, nc);

}
