#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int resultA = *a + *b;
    int resultB = *a - *b;
    
    // in absolute variable
    *a = resultA > 0 ? resultA : -resultA;
    *b = resultB > 0 ? resultB : -resultB;
}

int main() {
    int a = 4, b = 5;
    int *pa = &a, *pb = &b;
    
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}