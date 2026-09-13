#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char *s = malloc((size_t)n + 2);
    scanf("%s", s);

    long long total = 0;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            j++;
        }
        int len = j - i;
        if (len >= 2 && s[i] == 'a') {
            total += len;
        }
        i = j;
    }

    printf("%lld\n", total);

    free(s);
    return 0;
}