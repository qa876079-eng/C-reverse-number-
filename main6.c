// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float x1, y1, x2, y2, x3, y3 , Area;
    printf("Enter coordinates of three points;\n");
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    Area = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if (Area ==0)
    printf("points are collinear");
    else  
    printf("points are not collinear");
    return 0;
}
