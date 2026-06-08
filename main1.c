// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int x, y = 0, z;
    printf(" enter a 5-digit number \n");
    scanf("%d",&x);
    z = x;
    y = (y*10) + x%10;
    x = x/10;
    y = (y*10) + x%10;
    x = x/10;
    y = (y*10) + x%10;
    x = x/10;
    y = (y*10) + x%10;
    x = x/10;
    y =(y*10) + x%10;
    x = x/10;
    printf(" reversed number is:%d\n", y);
    if (z == y) {
    printf("z is equal to x\n");}
    else {
    printf("the original and reversed number are not equal\n");}
    return 0;
}
