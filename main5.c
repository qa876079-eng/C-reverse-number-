// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float x,y, Area, peri;
    printf("Enter length and breadth of rectangle:\n");
    scanf("%f%f", &x, &y);
    Area = x*y;
    peri = 2*x + 2*y;
    if (Area>peri) 
    {
    printf("Area of rectangle is greater than its perimeter\n");
    printf("Area = %f and perimeter = %f", Area, peri);
    }
    else 
    {
    printf(" Area of rectangle is not greater than its perimeter ");
    }
    return 0;
}
