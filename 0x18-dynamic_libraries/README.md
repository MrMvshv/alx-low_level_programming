0x18. C - Dynamic libraries

Note: to create dynamic library from code.c that can be run in Python
:
gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -Wl,-soname,<<libname.so>> -o <<libname.so>> -fPIC -I/usr/include/python3.4 code.c

