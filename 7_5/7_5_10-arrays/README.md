## arrays
char in C is a character, you can have an array of characters or to be exact, an array of bytes to form a 'string'.

C is strictly typed so all items in the array must all be of the stated type. Arrays can be defined specifically with a size or without, in which case the C compiler will work out the size for us. 

You cant append items into an array in C. When initialized, memory is allocated to hold the data and you cannot adjust the amount of memory provisioned, our array is restricted to the size allocated.

The only way to add to an array in a way is to create a new array, copy the data from the old array into the new array and then add the new data using the square brackets notation, and the remove the original array from memory 
