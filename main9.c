#include <stdio.h>
int main() 
{
    float x, y;
    printf("Enter coordinates of x axis and y axis:");
    scanf("%f%f", &x, &y);
    if (x==0 && y==0)
    printf("point lies on origin\n");
    else if (y==0)
    printf("point lies on x axis\n");
    else if ( x==0)
    printf(" point lies on y axis\n");
    else
    printf(" point lies on quadrant\n");
    return 0;
}
