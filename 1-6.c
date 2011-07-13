//Verify that the expression getchar() != EOF is 0 or 1.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
printf("Press [ENTER] to continue.");
printf("c = getchar() != EOF returns a: %d\n", getchar() != EOF);
printf("Press [ENTER] to exit.");
getchar();

//  system("PAUSE");	
  return 0;
}
