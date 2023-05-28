#include <stdio.h>
#include <math.h>


main(){

    float radius, area, perimeter;
    const double pi =  3.14285714; //constant

    printf("Enter the radius:");
    scanf("%f", & radius);

    area = pi * radius * radius;  // pi by radius squared
    perimeter = pi * radius * 2;  // pi by diameter

    printf(" The area is : %f", area);


    printf("\n The perimeter is : %f", perimeter);

    return 0;
}
