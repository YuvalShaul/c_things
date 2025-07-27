### A progran comprised of two files

- The **file-with-main.c** is the main file, containing the **main** function.
- The **other.c** file defines a function (func_a), and there is a declaration of that function in the other.h header file.

### How to compile
Let's compile that in a way that demonstrates the gcc tool, and focus on complilation and link phases.  


#### Compiling file-with-main.c
Compilation command:
```
gcc -c file-with-main.c
```

notes:
- the **-c** option tells gcc **not to link**.  
The normal behaviour is that it **ALWAYS TRY TO LINK**, so the option is really "compile only"
- Off course, this cannot create a complete program (func_a is missing).  
It will create an [**object file**](https://en.wikipedia.org/wiki/Object_file) (Look for **file-with-main.o**)
- The object file is already in a binary form, but it is not ready to run. It also contains a table of what it needs (in this case: looking for a function called func_a)
- The function definition is missing, but the compiler has its declaration. This is because **file-with-main.c** includes **other.h** header file.

#### Compiling other.c

Command:
```
gcc -c other.c
```
notes:
- We do not compile other.h directly, but it is included in **file-with-main.c**
- I have not done that here, but it is a good idea to include it in **other.c** as well
- As before, only an object file is created (**other.o**)

#### link
Command:
```
gcc file-with-main.o other.o
```
or:
```
gcc file-with-main.o other.o -o twofiles
```
notes:
- gcc is not going to compile anything, because I gave it no source file to compile (only object files)
- gcc is going to link, because it ALWAYS TRY TO LINK (unless told not to, by adding **-c**)
- The **-o** option is used to affect the output, and name the final executable file with a name that you choose. Otherwise it will be called **a.out**

#### Run your program
Running a program is really as simple as typing the file name.  
BUT...  
Linux is going to look for the command in a list of directories specified in the PATH environment variable.  
Guess what: the current directiry is not in the list (for good reasone!).  
So, you'll have to tell it:  
"Please run the twofiles program tht is in THIS (i.e **.**) directory, like this:
```
./twofiles
```
