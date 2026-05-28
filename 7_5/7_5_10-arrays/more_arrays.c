#include<stdio.h>

int main() {
    int nums[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Odds: %d %d %d %d %d\n", nums[0], nums[2], nums[4], nums[6], nums[8]);
    printf("Evens: %d %d %d %d %d\n", nums[1], nums[3], nums[5], nums[7], nums[9]);

    char message[] = "That's great!";
    printf("%s\n", message);
    message[2] = 'i';
    message[3] = 's';
    message[4] = ' ';
    message[5] = 'i';
    message[6] = 's';
    message[7] = ' ';
    message[8] = 'n';
    printf("%s\n", message);
  
    return 0;
}
