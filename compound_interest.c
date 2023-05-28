#include <stdio.h>
#include <math.h> // to allow use of pow() function
main(){
    
    float pri, rate, time, ci, ratetime, calcrate; //ci is compound interest
    
    printf("Enter the principle amount, rate, time(in years):");
    scanf("%f %f %f",& pri, & rate, & time);

    //break down the formula 
    calcrate = 1 + (rate/100);
    ratetime = pow(calcrate, time);  //pow() function calculates the power of any given number
    ci = pri * ratetime;

    printf("Your total amount = %f ", ci) ;
}
