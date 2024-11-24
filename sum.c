#include <stdio.h>

void sumIter(int num){ // Process the Iterative result of Sum
    int i, summ, result = 0, add;
    for (i = 1; i <= num; i++){
        add = i;
        summ = add + result;
        result = summ;
        printf(" %d ", summ);
    }
}

int sumRecu(int i){ // Process the Recursive result of Sum
    int sum;
    if (i <= 1){
        sum = 1;
    }
    else{
         sum =  sumRecu(i-1) + i;
    }
    return sum;
}

void sum(int n){ // Prints the Iteration and Recursive result of Sum by calling sumRecu and SumIter
    int i, num;
    num = n;

    printf("\nSum Series using non-recursive function: \n");
    sumIter(num);
    printf("\nSum Series using recursive Function:\n");
    for (i = 1; i <= num; i++){
      printf(" %d ", sumRecu(i));
    }
}
