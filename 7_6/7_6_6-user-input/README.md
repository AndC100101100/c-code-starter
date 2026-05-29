## user input
there are obvious dangers in accepting user input without appropriate validation. It can introduce buffer overflow exploits like in vulnerable.c


## reading files

when it comes to files, its basically identical to reading from the cli over standard in. reason is, stdin is actually treated as a file when the program runs, as are most objects in linux like directories, user input, output, processes running and hard drives, network comms and more. Anything that is a stream oif bytes expose through the filesystem namespace 
