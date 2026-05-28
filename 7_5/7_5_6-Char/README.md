## char
a char is a byte, which is 8 bits of data. With binary, 8 bits can only store a number between 0 and 255. We could reference the an ASCII table here and see how each value represente a single value.

we can consider what we write in our `char_binary.c` file were we reference the letter `M` being 77 in the ascii reference table, which saved in ram is reference directly as its binary value which is `1001101`.

in an example like the following
```c
char sentence[] = "My first variable";
    puts(sentence);
```
we can understand that our `sentence` var is an array, and array of bytes.
When our bytes are read back from memory, the binary from each byte is converted to whatever format we ask. binary -> decimal -> character

## null terminator
a null terminator is represented as `\0` and ends up in memory as `00000000`. it signifies the end of data or of the item being read, terminating the reading with nothing else or null, further to pick up.

signifies the end of our item in memory
```c
    char hello_pieces[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

```
