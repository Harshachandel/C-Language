
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>
int main(){

    int n = 5;  // Number of rows

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print first half numbers
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d ", j);
        }


    printf("\n");
}

}





