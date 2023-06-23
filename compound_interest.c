#include <stdio.h>
#include <math.h> // to allow use of pow() function
main(){
    
    float pri, rate, time, compoundinterest, ratetime, calcrate; 
    
    printf("Enter the principle amount, rate, time(in years):");
    scanf("%f %f %f",& pri, & rate, & time);

    //break down the formula 
    calcrate = 1 + (rate/100);
    ratetime = pow(calcrate, time);  //pow() function calculates the power of any given number
    compoundinterest = pri * ratetime;

    printf("Your total amount = %f ", compoundinterest) ;

    return 0;
}
