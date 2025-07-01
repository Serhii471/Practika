#include <stdio.h>

int main() {
    float t1, t2, t3;
    printf("Введіть три значення:\n");
    scanf("%f %f %f", &t1, &t2, &t3);
    float speed = (1.0 / t1) + (1.0 / t2) + (1.0 / t3), total_time = 1.0 / speed;
    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", total_time);
}
