# magia-9-os-intallation-
1. Mageia Installation in Virtual Environment

To begin, Mageia was installed in a virtual environment using VirtualBox and a bootable Mageia ISO. The installation process included downloading the ISO, flashing it to a USB with Balena Etcher, and running it through a virtual machine. Configuration steps included selecting the language, disk partitioning, desktop environment setup (Plasma), and user account creation.

Key highlights of the installation:

    Filesystem: Ext4 was chosen for its stability and journaling capabilities.

    System Requirements: Minimum 4GB RAM, Intel i5 processor, and 20GB disk space.

    Outcome: The installation was smooth, with no major issues encountered. Mageia proved user-friendly with a clean interface suitable for system-level development.

2. Implementing the vfork() System Call

The core of this project involved using the vfork() system call in a C program to demonstrate efficient process creation. Unlike fork(), vfork() creates a child process that shares the parent's memory space and suspends the parent until the child exits or executes a new program.

Key behavior in the program:

    The child process was created using vfork().

    It immediately used execlp() to execute the ls command.

    The parent process waited until the child finished, showcasing low-overhead and fast context switching.

This implementation in Mageia effectively demonstrated how vfork() can be used in resource-constrained environments where quick process creation is needed, making it ideal for shells and lightweight utilities.
