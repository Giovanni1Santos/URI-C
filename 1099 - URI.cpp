#include <stdio.h>

int main() {
    int n, a, b, cont, c = 0;
    scanf("%d", &n);

    while (c < n) {
        cont = 0;

        scanf("%d%d", &a, &b);

        if (a < b) {
            for (int i = a + 1; i < b; i++) {
                if (i % 2 != 0) {
                    cont = cont + i;
                    
                }
            }
        } else if (a > b) {
            for (int i = a - 1; i > b; i--) {
                if (i % 2 != 0) {
                    cont = cont + i;
                   
                }
            }
        }

        printf("%d\n", cont); 
        c++;
    }

    return 0;
}