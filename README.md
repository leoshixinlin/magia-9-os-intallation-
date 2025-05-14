# OSSP Project – Mageia Linux & `vfork()` System Call

## A. Mageia OS Installation  
Mageia 9 was installed in a virtual machine using Balena Etcher and VirtualBox. The setup involved flashing the ISO, selecting the desktop environment, setting a root password, and enabling the firewall. Mageia’s ext4 filesystem offers stability and performance. The installation was smooth and user-friendly.

## B. `vfork()` System Call Implementation  
The `vfork()` system call was implemented to demonstrate lightweight process creation. Unlike `fork()`, it allows the child to share memory with the parent until `exec()` or `_exit()` is called. This makes it faster for launching new programs. It’s ideal for constrained environments and efficient process management.

# OSSP Project – Mageia Linux & `vfork()` System Call

This project explores installing Mageia Linux and implementing the `vfork()` system call for efficient process creation.

## 📁 Project Sections

- [Mageia OS Installation Summary](./OS_Installation.md)
- [`vfork()` System Call Explanation](./vfork_SystemCall.md)
- [System Call Program in C](./vfork_program.c)

📄 [Full PDF Documentation](./OSSP_Individual_bereket_taddele_1600798_A-2.pdf)
