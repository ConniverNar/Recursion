#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

void iterativeFib(int num){ // Process the iterative result of Fibonacci

    int f;

    float bne = (1 + sqrt(5))/2;
    float bwo = (1 - sqrt(5))/2;

     for (f = 0; f <= num-1; f++){

    float binetOne = pow(bne, f);
    float binetTwo = pow(bwo, f);
    float Formula = (binetOne - binetTwo) / (sqrt(5));
        printf(" %.0f ", Formula);

    }

}

int recursiveFib(int i){ // Process the recursive result of Fibonacci
    int fib;
    if (i <= 1){
		fib = i;
	}
	else{
		fib = recursiveFib(i-1) + recursiveFib(i-2);
	}
	return fib;
}


void fibonacci(int n){ //  Prints the Iteration and Recursive result by calling iterativeFib and recursiveFib
    int i, num;
    num = n;
    printf("\nFibonacci Series using non-recursive function:\n");
    iterativeFib(num);
	printf("\n\nFibonacci Series using recursive function:\n");
    for (i = 0; i < num; i++){
        printf(" %d ", recursiveFib(i));
    }
    printf("\n");
}

