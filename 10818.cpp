#include <cstdio>

int main() {
    int n, a, min=1000001, max=-1000001;

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &a);

        if (a > max) {
            max = a;
        }
        if (a < min) {
            min = a;
        }
    }
    printf("%d %d", min, max);

    return 0;
}