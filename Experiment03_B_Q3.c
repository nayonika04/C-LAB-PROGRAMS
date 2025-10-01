// a)
#include <stdio.h>
 
int main() {
    int n, b, c = 1,space;
    for (n = 1; b <= 3; n++) {
        for(space =1; space <=3-n; space++){
            printf(" ");
        }
 
        for (b = 1; b <= n; b++) {
            printf("%d ", c);
            c++;
    }
    printf("\n");
    }
    return 0;
}
 
