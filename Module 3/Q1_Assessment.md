## 1. Signals Triggered by User Actions and System Events

**a. User Presses Ctrl+C**

* **Signal Triggered:** SIGINT -> Interrupt 

The kernel sends the SIGINT signal to the process group. This signal causes the process to terminate.

**b. kill() System Call is Invoked**

The `kill()` system call allows a process to send a signal to another process. The signal and the process id is given as argument to the `kill(pid, SIGNAL)`.

**c. CPU Tries to Execute an Illegal Instruction**

* **Signal Triggered:** SIGILL -> Illegal Instruction

If the CPU encounters an instruction that it cannot execute due to invalid opcode, memory access issues, or other reasons, it generates the SIGILL signal.

**d. When the Program Accesses Unassigned Memory**

* **Signal Triggered:** SIGSEGV -> Segmentation Fault

The kernel raises the SIGSEGV signal, notifying the process of the invalid memory access.

