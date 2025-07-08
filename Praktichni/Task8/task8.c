#include <stdio.h>
#include <string.h>

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main() {
    char s[15];
    int count[256] = {0};
    printf("Введи слово: ");
    scanf("%s", s);

    int len = strlen(s);
    for (int i = 0; i < len; i++)
        count[(int)s[i]]++;

    long long res = factorial(len);
    for (int i = 0; i < 256; i++)
        if (count[i] > 1)
            res /= factorial(count[i]);

    printf("%lld\n", res);
    return 0;
}
