#include<stdio.h>
int main() {
    int a,b,c; 
    printf("Enter three numbers\n"); 
    scanf("%d %d %d", &a, &b, &c); 

    int max = a; 
    if (b > max) {
        max = b;
    }

    if ( c > max) {
        max = c;
    }

    int min = a; 

    if ( b < min) {
        min = b; 
    }

    if ( c < min) {
        min = c;
    }

    printf("Max among three numbers is %d\n", max); 
    printf("Min among three numbers is %d\n", min); 
    return 0; 

}