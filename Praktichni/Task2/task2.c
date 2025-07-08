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
    return a * b / gcd(a, b);
}

int main() {
    int n;
    printf("Введіть кількість чисел: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    printf("НСК: %d\n", result);
    return 0;
}