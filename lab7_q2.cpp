//include library
#include <stdio.h>
//using void function
void printNumber(int N);
//using main function
int main(){
    int N;
    printf ("enter a number");
    scanf ("%d", &N);
    printNumber(N);
//end the program
    return 0;
}
 void printNumber(int N){
     if (N >= 1){
       printNumber(N-1);
       printf("%d", N);
       }
}
