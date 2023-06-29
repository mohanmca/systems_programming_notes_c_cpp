## C language history
1. Dennis Richie and Ken Thompson developed the C language in 1972 at Bell Labs.

## C language features & nitigrities
1. simple language
2. just 29 keywords
3. It could have only one main program in a project.
4. %lf - long float (double)


## Some notes about coding in C

1. use "!v" & "!g"
   2. It would invoke prior command with vi and prior command with !gcc
   3. We can reduce typing by using these commands.

## Sample program

```c
//
//  main.c
//  CProgramming

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
```
* gcc -o main.exe main.c