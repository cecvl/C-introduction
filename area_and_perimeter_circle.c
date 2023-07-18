#include <stdio.h>
#include <math.h>

#define PI 3.14285714

int main()
{

    float radius, area, perimeter;
    //const double pi =  3.14285714; 

    printf("Enter the radius:");
    scanf("%f", & radius);

    area = PI * radius * radius;  // pi by radius squared
    perimeter = PI * radius * 2;  // pi by diameter

    printf(" The area is : %f", area);

    printf("\n The perimeter is : %f", perimeter);

    return 0;
}
