/* 45. To generate a positive random integer.
CODE : */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generate_random(int l, int r, int count) {
 int i;
 for (i = 0; i < count; i++) {
 int rand_num = (rand() % (r - l + 1)) + l;
 printf("%d ", rand_num);
 }
}
int main() {
 int lower = 10, upper = 15, count = 15;
 srand(time(0));
 generate_random(lower, upper, count);
 printf("\n");
}