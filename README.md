# put-br-tag-on-numbers

A small C string-processing exercise that inserts literal `<br>` and `</br>` text around digit sequences using neighboring spaces as boundaries.

## Build and run

With GCC and a legacy C library that still provides `gets`:

```bash
gcc -std=c99 -Wall -Wextra boldnumbers.c -o boldnumbers
./boldnumbers
```

Enter a short sentence at the prompt. For example:

```text
Input:  I have 12 apples
Output: I have <br>12</br> apples
```

The program prints transformed text; it does not create an HTML file.

## Important limitations

- The source uses unsafe `gets`, removed from C11. Modern compilers/libraries may refuse to build or link it. Treat this as a historical learning exercise, not a safe text-processing tool.
- Both buffers have fixed size (`1000` bytes), and inserted tags consume additional space. Input and output bounds are not checked; do not use untrusted or long input.
- An opening tag is inserted only when a digit follows a space. Numbers at the start of a sentence and punctuation-adjacent numbers are not handled consistently.
- In HTML, `<br>` is a void line-break element, not a wrapper, and `</br>` is not a valid closing tag. This program demonstrates string insertion rather than valid HTML generation.

Source: [`boldnumbers.c`](boldnumbers.c). Existing screenshot: [Screenshot (34).png](Screenshot%20%2834%29.png).

Ahmad Einieh. All rights reserved.
