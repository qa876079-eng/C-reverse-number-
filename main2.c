// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int ram, shyam, ajay;
    printf("Enter age of ram, shyam, ajay");
    scanf("%d%d%d", &ram, &shyam, &ajay);
    if (ram<shyam && ram<shyam) {
        printf("youngest is ram");
    }
    else if (shyam<ram && shyam<ajay) {
        printf("youngest is shyam");
    }
    else if (ajay<ram && ajay<shyam) {
    printf("youngest is ajay");
    }
    return 0;
}
    
