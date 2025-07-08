#include <stdio.h>


int main() {
    int p;
    printf("Введіть p: ");
    scanf("%d", &p);

    long long a[p+1], b[p+1];
    a[1] = b[1] = 1;
    a[2] = b[2] = 2;

    for (int i = 3; i <= p; i++) {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1] + b[i-1] + a[i-2] + b[i-2];
    }

    printf("Кількість чисел: %lld\n", a[p] + b[p]);
    return 0;
}
