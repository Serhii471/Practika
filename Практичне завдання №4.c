#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    for (int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }
    printf("Кількість рівних дільників числа %d: %d\n", n, count);
}