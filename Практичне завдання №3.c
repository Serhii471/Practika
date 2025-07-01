#include <stdio.h>
#include <math.h>

int main() {
    int p;
    printf("Введіть кількість розрядів: ");
    scanf("%d", &p);

    long long total = pow(2, p);
    long long forbidden = 0;

    if (p >= 3) {
        forbidden = 2 * (p - 2) * pow(2, p - 3); 
    }

    long long result = total - forbidden;

    printf("Кількість чисел із %d розрядів: %lld\n", p, result);
}
