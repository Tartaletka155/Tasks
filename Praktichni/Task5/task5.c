#include <stdio.h>

int main() {
    int n;
    printf("Введіть n: ");
    scanf("%d", &n);

    int mod = 12345;
    int a[n+1], b[n+1], c[n+1];

    a[1] = b[1] = c[1] = 1;
    a[2] = b[2] = c[2] = 2;

    for (int i = 3; i <= n; i++) {
        a[i] = (a[i-1] + b[i-1] + c[i-1]) % mod;
        b[i] = (a[i-1]) % mod;
        c[i] = (b[i-1]) % mod;
    }

    int result = (a[n] + b[n] + c[n]) % mod;
    printf("Кількість послідовностей: %d\n", result);
    return 0;
}
