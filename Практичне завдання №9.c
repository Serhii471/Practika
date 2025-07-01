#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int d = y - x;
    int k = 0;
    while (k * (k + 1) / 2 < d)
        k++;
    printf("%d", k);
}


