#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

void iterativeFac(int num){ // Process the iterative result of Factorial
    int i, factorial = 1;
    for (i = 1; i <= num; i++){
        factorial *= i;
        printf(" %d ", factorial);
    }
}


int recursiveFac(int i){ //Process the recursive result of Factorial
    int fac;
    if (i <= 1){
        fac = 1;
    }
    else{
        fac = recursiveFac(i - 1) * i;
    }
    return fac;
}

void factorial(int n){ // Prints the Iteration and Recursive result by calling recursiveFac and iterativeFac
    int i, num;
    num = n;

    printf("\nFactorial Series using non-recursive function:\n");
    iterativeFac(num);
    printf("\n\nFactorial series using recursive function:\n ");
    for (i = 1; i <= num; i++){
        printf(" %d ", recursiveFac(i));
    }
    printf("\n");

}

