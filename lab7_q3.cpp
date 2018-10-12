#include <stdio.h>


//declaring the function
void printEvenOdd(int cur, int limit);



int main()
{
    int lowerLimit, upperLimit;
    
    // asking the user for input
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    
    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit); 
//end the program    
    return 0;
}


// using recursive function to print even or odd numbers in a given range. 
 
void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;
    
    printf("%d, ", cur);
    
    // Recursively call to printEvenOdd to get next value
    printEvenOdd(cur + 2, limit);
}


