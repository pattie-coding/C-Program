#include <stdio.h>
int main () {
    int myNum1, myNum2;
    printf("Enter Your First Number:");
    scanf("%d", &myNum1);

    printf("Enter Your Second Number:");
    scanf("%d", &myNum2);

    if(myNum1>myNum2) {
        printf( "Largest Number = %d", myNum1);
    }

    else {
        printf("Largest Number = %d", myNum2);
    }
return 0;
}