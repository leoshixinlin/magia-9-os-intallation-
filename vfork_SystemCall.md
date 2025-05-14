# `vfork()` System Call (Summary)

The `vfork()` system call creates a new process more efficiently than `fork()`, sharing the parent's memory.
In this project, `vfork()` was used to spawn a child that immediately runs `execlp("ls")`. Meanwhile, the parent waits for the child to complete using `wait()`.
This setup minimizes resource usage and demonstrates efficient process creation in Linux.
