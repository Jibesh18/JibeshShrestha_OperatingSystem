# Lab 3: How a Program Becomes a Process

## Code

**1. Run for 30 seconds**

```
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("I am starting ....\n");
    for (int i = 1; i <= 30; i++) {
        sleep(1);
    }
    printf("I am finished.\n");
    return 0;
}
```

```
gcc task1_alive.c -o task1
./task1 &
ps aux | grep task1
```

**2. Show PID and parent PID**

```
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("My PID is: %d\n", getpid());
    printf("My parent PID is: %d\n", getppid());
    sleep(20);
    return 0;
}
```

**3. Success or failure (exit code)**

```
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Success\n");
        return 0;
    }
    printf("Failure\n");
    return 1;
}
```

```
./task3
echo $?
```

## Explanation

- **Task 1:** the program sleeps for 30 seconds. `&` runs it in the background, so I could check it with `ps`.
- **Task 2:** every process has an ID (PID) and a parent (PPID). Here the parent was `bash`.
- **Task 3:** `0` means success and anything else means failure. `echo $?` shows it.
- **Tasks 4 and 5:** used `scanf` to read input and `printf` to show output, and combined it with the PID.

## Quick Answers

- **Process:** a program that is running.
- **PID:** a number the OS gives each process.
- **New process:** `fork()`. **Replace a process:** `exec()`.
- **See processes:** `ps`.
