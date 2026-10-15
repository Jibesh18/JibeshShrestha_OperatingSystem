# Lab 2.1: C Libraries, Linking and ELF

## Code

```
gcc -static procinfo.c -o procinfo_static
gcc procinfo.c -o procinfo_dynamic
readelf -h procinfo_dynamic
readelf -l procinfo_dynamic
readelf -d procinfo_dynamic
ldd procinfo_dynamic
ldd procinfo_static
```

## Preview

- I wrote a C program (`procinfo.c`) that prints its process ID and the current time.
- I compiled it two ways:
  - **Static:** the library code is copied inside the file, so the file is big (961K).
  - **Dynamic:** the file only points to the library, so it is small (16K).
- `readelf` shows what is inside the file. `readelf -d` lists `libc.so.6` as the library the program needs.
- `ldd` shows which libraries a program uses:
  - The dynamic file lists `libc.so.6`.
  - The static file says "not a dynamic executable", because it needs no outside library.
