# to be able to compile the `http_request.c` file 
you will first need the curl/curl.h library so:

## im on linux, a debian distro:
```
sudo apt update
sudo apt install libcurl4-openssl-dev
```

## to install the utility in MacOS
```bash
brew install curl
```

## windows

idk dude ask chatgpt or sum, i am not using windows 


# Linking

your linker (ld) WILL complain because it sees the names of the curl functions, but it doesn't have the actual compiled library code to stitch into your final http executable.

you just need to add the -lcurl flag to your command.

```bash
gcc -o http http_request.c -lcurl
```

> Make sure -lcurl goes at the end of the command, after your source file (http_request.c). GCC reads dependencies from left to right. If you put -lcurl first, GCC will look at the curl library, see that no previous files needed it yet, and discard it before it even reads your C file
