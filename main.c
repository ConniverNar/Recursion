#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

int main() //
{
    int n;
    printf("======MAIN MENU=======\n");
    printf("Enter the value of N: ");
    scanf("%d", &n);

    factorial(n);
    fibonacci(n);
    sum(n);

    return 0;
}
