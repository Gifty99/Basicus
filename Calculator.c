//This is a basic calculator app
//Takes 3 inputs from the user, 2 numbers and an operator
//The operators used in the app are, +, - , /, *, ^, sqrt (space)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float firstnumber;
  float secondnumber;
  char operator;
  float answer;

  printf("Welcome to Basicus\n");

  printf("Enter calculation (in the order, 1st number, operator, 2nd number):\n\n");;
  scanf("%f %c %f", &firstnumber, &operator, & secondnumber);

  switch(operator)
    {
    case '/': answer = firstnumber/secondnumber;
      break;
    case '*': answer = firstnumber*secondnumber;
      break;
    case '+': answer = firstnumber+secondnumber;
      break;
    case '-': answer = firstnumber-secondnumber;
      break;
    case '^': answer = pow(firstnumber, secondnumber);
      break;
    case ' ': answer = sqrt(secondnumber);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",firstnumber,operator, secondnumber, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}