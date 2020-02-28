# libft
The first project as a 1337 student where we re-code several functions of the standard C library, as well as other utility functions.
## Getting Started
The library just needs to be compiled to a libft.a
## Compiling
To compile, run the next command from the terminal in the root of the directory
```
make
```
## Using the library
To use the library compile your source using the libft.a and including the "libft.h" header. Include the header like this
```
#include "libft.h"
```
and at the compilation add the -lft and point with -L to the directory containing libft.a. Your compilation command will look something like this
```
gcc yoursourcefile.c -lft -L ./libft
```
