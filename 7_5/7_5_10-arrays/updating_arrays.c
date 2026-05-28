#include<stdio.h>

int main() {
   int nums[5] = {2, 4, 6, 8, 10};
   printf("Array item at index 3: %d\n", nums[3]);
   nums[3] = 1337;
   printf("Array item at index 3 is now: %d\n", nums[3]);

   return 0;
}
