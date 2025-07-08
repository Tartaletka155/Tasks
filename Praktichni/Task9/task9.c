#include <stdio.h>


int min_steps(int x, int y) {
    long long dist = y - x;
    long long k = 1;
    while (k * k <= dist) k++;

    k--;

    if (dist == k * k) return 2 * k - 1;
    else if (dist <= k * k + k) return 2 * k;
    else return 2 * k + 1;
}

int main() {
    int x, y;
    printf("Введи x і y: ");
    scanf("%d %d", &x, &y);

    int steps = min_steps(x, y);
    printf("Мінімальна кількість кроків: %d\n", steps);
    return 0;
}
