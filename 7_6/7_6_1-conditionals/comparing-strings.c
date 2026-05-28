#include <stdio.h>
#include <string.h>

int main()
{
      // we should not compare strings like this!
    printf("%d\n", "dog" > "cat");                // 0
    printf("%d\n", "bar" > "cat");                // 1
    printf("%d\n", "bar" > "cathode");            // 0
    printf("%d\n", "bar" > "bat");                // 0
    printf("%d\n", "bar" == "bar");               // 1

    // Compare strings using strncmp
    printf("%d\n", strncmp("dog", "cat", 3));     // 1
    printf("%d\n", strncmp("bar", "cat", 3));     // -1
    printf("%d\n", strncmp("bar", "cathode", 7)); // -1
    printf("%d\n", strncmp("zip", "cat", 3));     // 23
    printf("%d\n", strncmp("bar", "bat", 3));     // -2
    printf("%d\n", strncmp("bar", "bar", 3));     // 0

    return(0);
}
