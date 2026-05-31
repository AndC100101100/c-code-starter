## about environ

in our all_env_vars.c file, we use the following:
```c
extern char **enviorn;
```

here we use the keyword `extern`, this extends the var and the functions beyond our current program scope. In this code it is necessary, we need to ask the wider system for information.

Knowing the scope we are working on, we are also refering to an already existing var named `environ`, and we also use the `**` notation. This is a double pointer, a pointer to a pointer, which will help us retrieve all the variable names into this already existing array
