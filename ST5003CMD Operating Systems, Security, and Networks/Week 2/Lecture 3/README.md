# Linux Lab: Commands and C Compilation

## Code

**File operations**
```bash
mkdir linux_lab            # create a directory
cd linux_lab               # move into it
nano greeting.txt          # create and edit a file
cat greeting.txt           # view the file
cp greeting.txt backup.txt # copy a file
mv backup.txt old_greeting.txt  # rename a file
rm old_greeting.txt        # remove a file
ls -l                      # list files with permissions
```

**APT package management**
```bash
sudo apt update
sudo apt install build-essential
gcc --version
apt search python3
```

**hello.c**
```c
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("Hello, Linux Lab!\n");
    printf("Sum of %d and %d is %d\n", a, b, a + b);
    return 0;
}
```

**Compile and run**
```bash
gcc -Wall hello.c -o hello_program
./hello_program
```

## Explanation

- I used basic Linux commands to create folders, create and edit files, copy, rename, and delete them.
- I used `apt` to update packages and install GCC with `build-essential`.
- I wrote a C program in nano that adds two numbers, then changed the values and recompiled it.
