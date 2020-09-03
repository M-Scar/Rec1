// Author: Michael Scarpitta mss6102@psu.edu
// Collaborator: Stephanie Jen tzj5235@psu.edu
// Collaborator: Elliot Marsico eam6077@psu.edu
// Collaborator: Kunmao Yu kzy5115@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp = readline("Enter temperature in celius: ");
  double tempNum = atof(temp);
  double f = tempNum*1.8+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", tempNum,f);
  return 0;
}