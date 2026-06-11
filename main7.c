// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    // Write C code here
    float x0, y0, r, px, py, dxp, dyp,d;
    printf("Enter coordinates of centre of circle and radius:\n");
    scanf("%f%f%f", &x0, &y0, &r);
    printf("Enter coordinates of point:\n");
    scanf("%f%f",&px, &py);
    dxp = px-x0;
    dyp = py-y0;
    d = sqrt(dxp*dxp + dyp*dyp);
    if (r<d)
    printf(" point is outside the circle");
    else if (r==d)
    printf("point is on the circle ");
    else 
    printf(" point is inside the circle");
    return 0;
}

