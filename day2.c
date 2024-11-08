#include <stdio.h>

int main() {
    int n, r, s = 9;
    
    puts("Enter a number:");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;    
        if (r < s) {   
            s = r;     
        }
        n = n / 10;   
    }
    printf("Smallest digit in number is: %d\n", s);

    return 0;
}

