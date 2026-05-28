#include<stdio.h>

int main() {
   int nums[5] = {2, 4, 6, 8, 10};
   printf("Array item at index 3: %d\n", nums[3]);
   char greeting[10] = {'H', 'e', 'y', ' ', 't', 'h', 'e', 'r', 'e', '\0'};
   printf("Greeting: %s\n", greeting);
   printf("Array item at index 2: %c\n", greeting[2]);
   char leaving[] = "Goodbye!";
   printf("Leaving: %s\n", leaving);
   printf("Array item at index 3: %c\n", leaving[3]);

   return 0;
}
