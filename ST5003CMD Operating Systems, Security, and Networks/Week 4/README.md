# Week 4: C Libraries, Linking and ELF Executables

This folder covers how a C program uses the standard library, how static and dynamic linking differ, and how to inspect an executable with `readelf` and `ldd`.

## Contents

| File | Description |
|---|---|
| `Lab2_1.pdf` | Lab report with screenshots, a command reference table, and knowledge check answers |
| `procinfo.c` | Prints the process ID, parent process ID and current time using library functions |

## Topics

- **Headers and libraries:** header files (`.h`) are in `/usr/include`, and compiled libraries (`.a`, `.so`) are in `/lib` and `/usr/lib`
- **Static linking:** library code is copied into the executable, so the file is larger
- **Dynamic linking:** the executable uses shared libraries such as `libc.so.6` at run time, so the file is smaller
- **`readelf`:** shows the ELF header (`-h`), program headers (`-l`) and dynamic section (`-d`)
- **`ldd`:** lists the shared libraries a program needs, and reports "not a dynamic executable" for static files
