# Week 2 – Lecture 2: Linux Commands and C Compilation

## Code

**File operations**

```
mkdir linux_lab
cd linux_lab
nano greeting.txt
cat greeting.txt
cp greeting.txt backup.txt
mv backup.txt old_greeting.txt
rm old_greeting.txt
ls -l
```

**APT package management**

```
sudo apt update
sudo apt install build-essential
gcc --version
apt search python3
```

**hello.c**

```
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("Hello, Linux Lab!\n");
    printf("Sum of %d and %d is %d\n", a, b, a + b);
    return 0;
}
```

**Compile and run (Lab 1)**

```
gcc -Wall hello.c -o hello_program
./hello_program
```

**Four stages of compilation (Lab 2)**

```
gcc -E hello.c -o hello.i
gcc -S hello.i -o hello.s
gcc -c hello.s -o hello.o
gcc hello.o -o hello
```

**Check exit status**

```
echo $?
```

## Explanation

- Used basic Linux commands to create a folder, then create, copy, rename and delete files.
- Used `apt` to update packages and install GCC with `build-essential`.
- Wrote a C program in nano that adds two numbers, compiled it with `-Wall` (shows warnings), then changed the values and compiled again.
- Learned the 4 compilation stages: preprocessing (`.i`), compiling (`.s`), assembling (`.o`) and linking (executable).
- `main()` returns `0` for success. A non-zero value means an error. `echo $?` shows the exit status.
- Knowledge check covered OS basics: OS, kernel, process vs program, and virtualization.
