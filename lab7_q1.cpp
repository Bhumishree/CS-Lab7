//including library
#include <stdio.h>
//declaring power function
double pow(double base, int expo);

int main()
{
    double base, power;
    int expo;
    
    //asking the user for base and exponent
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    
    // Calling pow function
    power = pow(base, expo); 
    
    printf("%.2lf ^ %d = %f", base, expo, power);
//end the program
    
    return 0;
}


//returning the power to the user

double pow(double base, int expo)
{
    //applying base condition
    if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * pow(base, expo - 1);
    else
        return 1 / pow(base, -expo);
}


