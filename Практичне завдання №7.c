#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    double d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    if (x1 == x2 && y1 == y2 && r1 == r2)
        printf("-1");
    else if (d > r1 + r2 || d < fabs(r1 - r2))
        printf("0");
    else if (d == r1 + r2 || d == fabs(r1 - r2))
        printf("1");
    else
        printf("2");
}
