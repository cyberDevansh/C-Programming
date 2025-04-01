#include <stdio.h>
#include <conio.h>
// Function to implement the Ackermann function
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}
int main() {
    int m, n;
    
    printf("Enter value for m: ");
    scanf("%d", &m);
    
    printf("Enter value for n: ");
    scanf("%d", &n);
    
    int result = ackermann(m, n);
    
    printf("Ackermann(%d, %d) = %d\n", m, n, result);
    getch();
    return 0;
}
