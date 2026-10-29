#### This experiment demonstrates an ontological paradox by executing a program that deletes its own source file during runtime. The system proves that a process can continue to exist and execute in memory even after its physical presence on the disk has been erased.

### Python
The Python script uses the standard os module to find its own absolute path. It prints a message and then immediately removes the file from the file system. Because the Python interpreter has already loaded the bytecode into memory, the script continues to run successfully despite the source file no longer existing.

### C
The C implementation relies on the argv array to capture its own executable name. It calls the standard remove function to unlink the binary from the disk. The operating system keeps the program in memory, allowing it to finish execution even though it has been entirely wiped from the storage.

### Rust
The Rust version uses the standard library to resolve the current executable path. It invokes the file removal function to delete the binary. The ownership model ensures the file handle is safely released, yet the process memory remains intact and continues to the next print statement.

### Shell
The shell script uses the zero variable to reference its own filename. It uses the rm command to delete the script from the directory. The bash interpreter continues to read and execute the subsequent commands directly from memory, resulting in a successful run of a non-existent file.
