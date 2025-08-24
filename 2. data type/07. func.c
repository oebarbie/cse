#include <stdio.h>

double compute_average(int nums[5]) {

  double sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += nums[i];
  }
  double avr = sum / 5;
  return avr;
}

int main() {

  int nums[5];
  for (int i = 0; i < 5; i++) {
    scanf("%d", &nums[i]);
  }

  double avr = compute_average(nums);
  printf("avr is %lf\n", avr);
  return 0;
}