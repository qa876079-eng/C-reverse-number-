// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float a, b, c;
    printf("Enter angles of triangle:");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b + c  == 180) 
        printf("Triangle is valid");
    else 
        printf( "triangle is invalid");
    return 0;
}
