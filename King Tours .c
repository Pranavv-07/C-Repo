#include <stdio.h>
int main() {
    int N, M;
    scanf("%d", &N);

    scanf("%d", &M);
    int maxPeople = (N * 5) + (M * 7);
    printf("%d\n", maxPeople);

    return 0;
}