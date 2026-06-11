#include <stdio.h>
#include <math.h>
int main() 
{
    float a, b, x, y;
    printf("Enter coordinates of x axis and y axis:");
    scanf("%f%f", &x, &y);
    if (x==0)
    printf("point lies on y axis");
    else if (y==0)
    printf("point lies on x axis");
    else 
    printf(" point lies at centre or between x and y axis");
    return 0;
}
