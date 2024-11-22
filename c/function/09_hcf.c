#include <stdio.h>
int min(int a, int b) {
    if (a<b) return a;
    else return b;
}
int gcd(int a, int b) {
    int hcf;
    for (int i = min(a,b); i>=1; i--) {
        if (a%i==0 && b%i==0) {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    return 0;
}