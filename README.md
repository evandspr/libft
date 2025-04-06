# libft

Custom C library built for the 42 curriculum, including essential functions, [ft_printf](https://github.com/evandspr/libft/blob/main/src/ft_printf.c) for formatted output, and [get_next_line](https://github.com/evandspr/libft/blob/main/src/get_next_line.c) for line reading.

## Goals
- Recreate key C functions (e.g., `strlen`, `memcpy`).
- Add `ft_printf` and `get_next_line` for advanced functionality.
- Make a reusable library for 42 projects.

## Learned
- Pointers, memory, and string handling.
- Writing clean, efficient code with variable arguments and file I/O.

## Usage
```c
#include "libft.h"
int main() {
    ft_printf("Hello %s\n", "42");
    char *line = get_next_line(0);
    return (0);
}
```
**edesprez**

42 Student @ Paris
