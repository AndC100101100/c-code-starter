#include <stdio.h>
#include <string.h>

extern char **environ;

int main() {
    int i = 0;
    
    while (environ[i] != NULL) {
        // Find the first occurrence of '='
        char *eq_ptr = strchr(environ[i], '=');
        
        if (eq_ptr != NULL) {
            // Calculate the length of the key (distance from start to '=')
            int key_len = eq_ptr - environ[i];
            
            // '%.*s' allows us to print exactly 'key_len' characters without needing a null-terminator
            printf("key: %.*s\n", key_len, environ[i]);
            
            // Print everything after the '=' as the value
            printf("val: %s\n\n", eq_ptr + 1);
        } else {
            // Handle malformed environment variables gracefully
            printf("Malformed env string: %s\n\n", environ[i]);
        }
        i++;
    }

    return 0;
}
