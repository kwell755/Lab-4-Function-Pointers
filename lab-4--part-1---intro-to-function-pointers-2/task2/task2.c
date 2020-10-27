#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int (*actionPointer)(int,int);
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide (int a, int b);
int exitProgram();



int main (void)
{
	bool continueOn = true;
  while(continueOn == true){
  int action;
  int answer;
 actionPointer actionOptions[5];
  
  actionOptions[0] = add;

  actionOptions[1] = subtract;

  actionOptions[2] = multiply;

  actionOptions[3] = divide;

  actionOptions[4] = exitProgram;
  
  printf("0 -> add : \n");

  printf("1 -> subtract: \n");

  printf("2 -> multiply: \n");

  printf("3 -> divide: \n");

  printf("4 -> exit: \n");

  scanf("%i", &action);

  answer = (actionOptions[action])(5,2);

  printf("Answer = %d\n", answer);

	}

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }

int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }

int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }

int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }

int exitProgram() { printf ("Exiting Program\n"); exit(0); return 0; }