### Some notes to the famous hello world program

- The **#** sign is a command (or rather **directive**) destined to a tool called **[the C preprocessor](https://en.wikipedia.org/wiki/C_preprocessor)**
- This tool fetches that file (**stdio.h** that I found in my Ubuntu system at /usr/include), so that the compiler has a complete text to compile
- This file is a [**header file**](https://simple.wikipedia.org/wiki/Header_file).  
The real meaning of that is that it does not include any code that does something, or occupies anything in memory. There are only [**declarations**](https://en.wikipedia.org/wiki/Declaration_(computer_programming) there, showing information about functions and maybe variables, but really defining them.