// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int x, y = 0;
    printf(" enter a 5-digit number \n");
    scanf("%d",&x);
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
    return 0;
}
