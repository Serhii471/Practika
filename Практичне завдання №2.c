#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;
    int numbers[20];

    printf("Введіть кількість чисел: ");
    scanf("%d", &n);

    printf("Введіть %d чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];

    for (int i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("%d\n", result);
}
