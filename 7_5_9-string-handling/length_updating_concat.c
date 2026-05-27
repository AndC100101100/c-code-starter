#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Some text";
    char str2[] = "";
    printf("str1 is %ld characters long\n", sizeof(str1)); // will return lenght including null pointer


    printf("str1 is %ld characters long\n", strlen(str1)); // will only return readable chars
    strcpy(str2, str1);
    printf("str2 now has a value '%s', the same as str1\n", str2);
    char str3[] = "Joined";
    char str4[] = "Text";
    strcat(str3, str4);
    printf("Concatenated str4 after str3: %s", str3);

    return 0;
	

}
