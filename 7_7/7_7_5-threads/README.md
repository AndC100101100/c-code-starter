# threads and their properties

A single thread is an independent stream of instructions to execute. It has its own stack memory and shares this and heap memory resources with other threads. it shows benefits in shared resource space, for easy shared data usage and comms.

less work for the processor, to use many threads rather than many processes.

Threads execute in parallel, and they run in thread groups with no parent process, differentiating them from forking.

# mutex
one of the ways we have to avoid race conditions with threads in C is mutex. its sort of a lock we can set just before using a shared resource and then unlock it after we are finished with the shared resource.

No other thread can access this same portion of code while this lock is enabled, they wait for their turn. also, only the thread that locked the code can unlock it
 
