//including library 
#include <stdio.h>


//declaring the function
int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;

    //asking the user for input
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num1, &num2);
    
    //applying conditions
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
//end the program    
    return 0;
}


//using recursive function
int lcm(int a, int b)
{
    static int multiple = 0;
    
    multiple += b;
    
    //Applying conditions of recursion
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}


