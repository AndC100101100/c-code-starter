linux elf (executable and linkable format) files are the executable equivalent of linux based systems.
you can cross compile for other systems, but one binary is never the same for two different OSs like linux and windows.

we are also offered backwards compatibility by allowing us to compile our binary into 32-bits in our 64-bit machine, were this binary would still be runnable in our system (assuming 64-bit is your current host)

```bash
gcc -m32 -o hello hello.c
```

There are a bunch of other options that you can use and implement when compiling. They go from optimizing file size, to adding debugging, specifying processor tasks and adding library linking options, diagnostics and more.
