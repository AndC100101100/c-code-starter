## about environ

in our all_env_vars.c file, we use the following:
```c
extern char **enviorn;
```

here we use the keyword `extern`, this extends the var and the functions beyond our current program scope. In this code it is necessary, we need to ask the wider system for information.

Knowing the scope we are working on, we are also refering to an already existing var named `environ`, and we also use the `**` notation. This is a double pointer, a pointer to a pointer, which will help us retrieve all the variable names into this already existing array


# getenv
we can just use getenv() as an alternative to get one of the values we want. We need stdlib.h.

> there is a `secure_getenv` that is similar but will return a null pointer if the environment is untrusted. 

# putenv and setenv

add your own env vars with putenv, with the key=value format. so something like:
```c
putenv("MYVAL=yes")
```
a successful run will return 0, non-zero for errors

setenv bascially acts the same but looks like

```c
setenv("MYVAL", "yes");
```
you can also add a third argument, a `1`, which will overwrite the env var if it exists

# unsetenv and clearnenv
remove single environment variables or all of them using these two functions. if we wanted to remove a single one
```c
unsetenv('MYVAL');
```
or if you want to clear everything:
```c
clearenv()
```
return 0 if succesfull, non zero for errors
