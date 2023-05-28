#include <stdio.h>
main(){

    float pri, rate, time, si;  //use float  to allow inputs in decimals too
    printf("Good evening.Enter principle amount, rate, time:");
    scanf("%f %f %f", & pri, & rate, & time);

    si = (pri * rate * time)/100; //division by 100 because rates are in percentages

    printf("Simple Interest = %f", si);


    return 0;
}