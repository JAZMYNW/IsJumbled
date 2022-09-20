# EC330IsJumbled
C++ function:
bool isJumbled (char* str1, char* str2)
The function receives as input two strings, and returns true if they contain the same
characters, possibly in a different order. For example, the function should return true
for inputs “abcd” and “dabc”, and should return false for inputs “abcd” and “dabca”.
Your main function should receive two strings from the command line, call the
isJumbled function with the provided strings, and print out “jumbled” or “not
jumbled”, according to the output returned by the function.
For example, suppose that you compile your program to the executable Problem4,
and your program is run as follows:
> Problem4 abcd dabc
It should then output:
> jumbled
