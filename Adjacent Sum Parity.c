#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t-- > 0) {
        int n;
        scanf("%d", &n);
        int array[n];
        int i, j, count = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
            if (array[i] == 1)
                count++;
        }
        if (count % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
