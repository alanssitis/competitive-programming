#include <stdio.h>
#include <stdlib.h>

int main() {
  int n_tests, n, k;
  char str[100];
  scanf("%d", &n_tests);
  for (int i = 0; i < n_tests; i++) {
    scanf("%d %d\n%s", &n, &k, str);
    int score = 0;
    for (int j = 0; j < n / 2; j++) {
      score += str[j] != str[n - j - 1];
    }
    printf("Case #%d: %d\n", i + 1, k > score ? k - score : score - k);
  }
}