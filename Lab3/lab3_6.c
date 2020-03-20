#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  char input_x[10], input_y[10];

  printf("Input x: ");
  gets(input_x);
  printf("Input y: ");
  gets(input_y);

  double x, y;
  char input_command;

  x = atof(input_x);
  y = atof(input_y);

  printf("x = %5.4f, y = %5.4f\n", x, y);
  printf("[a]:Add [s]:Subtract [m]:Multiply [d]:Divide [M]:modulo [^]: x^y\n");
  printf("Command? ");
  input_command = getchar();
  switch (input_command){
    case 'a':
    printf("x '%' y");
  }
}