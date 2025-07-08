#include <stdio.h>

int main() {
    double t1, t2, t3;
    double total_time, average_time;

    printf("Введіть час для першого гостя: ");
    scanf("%lf", &t1);

    printf("Введіть час для дугого гостя:  ");
    scanf("%lf", &t2);

    printf("Введіть час для третього гостя: ");
    scanf("%lf", &t3);

    total_time = t1 + t2 + t3;
    average_time = total_time / 3;

    printf("Загальний час: %.2lf\n", total_time);
    printf("Середній час у годинах: %.2lf\n", average_time);

    return 0;
}
