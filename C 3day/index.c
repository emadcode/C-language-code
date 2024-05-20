#include <stdio.h>
#include <cs50.h>

int main() {
    int i = 1;

    // do-while loop to print numbers from 1 to 20
    // here print 1 in 20 becouse i<= 20 
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 20);

    return 0;
}
