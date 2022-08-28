#include <stdio.h>
#include <cstdlib>
//added cstdlib library so I could use abs() to find the absoluted difference between a and b

void update(int *a,int *b) {
    // Declare variables C and D to hold the calculations
    //C holds the sum between a and b
    int c = *a + *b;
    //D holds the absoluted difference between a and b. 
    int d = abs(*a - *b);
    //assigns the sum to a using pointer
    *a = c;
    //assigns the absoluted difference to b using pointer
    *b = d;     
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}