#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i;
  srand(time(NULL));
  for (i = 1; i < 11; i++) {
    char kk[4] = {'+', '-', '*', '/'};
    int a = rand() % 20;
    int b = rand() % 20;
    int k = rand() % 4;
    int ans, ans1; //랜덤

    printf("[%d/10] %d %c %d = ", i, a, kk[k], b);
    scanf("%d", &ans);

    if (k == 0) {
      ans1 = a + b;
    } else if (k == 1) {
      ans1 = a - b;
    } else if (k == 2) {
      ans1 = a * b;
    } else if (k == 3) {
      ans1 = a / b;
    }
    if (ans == ans1) {
      printf("Correct!\n");
    } else
      printf("Wrong! Answer is %d\n", ans1);
  } //정답 체크 로직
}
