#include<stdio.h>
#define PI 3.1416
int main()
{
    float radius, diameter, circumference, area;
    printf("Enter radius: ");
    scanf("%f", & radius);
    diameter= radius*2;
    circumference= 2*PI*radius;
    area=PI*radius*radius;
    printf("Diameter = %f\n",diameter);
    printf("Circumference = %f\n", circumference);
    printf("Area = %f\n", area);
    return 0;
}
