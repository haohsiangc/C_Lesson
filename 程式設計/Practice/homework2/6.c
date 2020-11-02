#include <stdio.h>
#include <stdlib.h>
void printSums(int N);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printSums(num);
    system("pause");
    return 0;
}
void printSums(int N) {
    int start = 1, end = 1;
    int sum = 1;
    int found = 0;
    while (start <= N / 2) {
        if (sum < N) {
            end += 1;
            sum += end;
        } else if (sum > N) {
            sum -= start;
            start += 1;
        } else if (sum == N) {
            printf("Sum of %d to %d is %d.\n", start, end, N);
            found++;
            sum -= start;
            start += 1;
        }
    }
    if (found == 0) {
        puts("Not found!");
    }
}
