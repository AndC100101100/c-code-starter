# file handling

## fscanf

we are going to use `fscanf()` we interacts differently with files then something like `fgets()`.

fscanf reads bytes until it finds whitespace characters and passes each chunk along as individual items to format as specified. we basically get the ability to format an input stream of chunks of content.

## fseek
when we read bytes from a file, there is a position counter that increments as each byte is read in.
> It can be thought of as, say, moving your finger from the left side of a ruler along the edge, and as you move your finger along, the position counter value increases. You can in fact move your finger rightward or leftward to increment or decrement that counter and end up back at 0 at the the start of the ruler if you move your finger far enough leftward.

`fseek` acts in the same way, where in this case our finger is the position, and the ruler is the bytes of file data. being able to move left and right through a stream of bytes guves a greater level of control.

```c
fseek(<file>, <offset>, <origin>)
```
 second and third arguments work as a pair really - the third being the origin position in the file to begin from, and offset is then applied to that. The origin position can be:

- SEEK_SET - Start of file
- SEEK_CUR - Current position of file pointer
- SEEK_END - End of file


