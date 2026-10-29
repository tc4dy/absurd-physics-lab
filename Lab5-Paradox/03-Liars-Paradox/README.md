#### This experiment simulates the Liar Paradox by using a logical state that continuously negates itself. The system creates a feedback loop where the truth value oscillates infinitely, demonstrating the impossibility of a stable resolution for self-referential contradictions.

### Python
The Python script defines a variable initialized to true and enters a loop that sets its value to the exact opposite on every iteration. Without a break condition, the execution would continue indefinitely. The script catches the recursion or timeout limits to prove that the logical contradiction prevents any stable final state.

### C
The C implementation uses an integer as a boolean flag and flips it using the logical NOT operator inside an infinite loop. It tracks the number of iterations to avoid a hard freeze, printing the oscillating state. This clearly illustrates how the truth value bounces between zero and one endlessly.

### Rust
The Rust version uses a mutable boolean variable and toggles it using the standard NOT assignment. The strict type safety prevents any undefined states, forcing the logic to alternate strictly between true and false. The loop is bounded by a counter to output the paradox safely.

### Shell
The shell script represents the logic using string variables "true" and "false". A while loop checks the current state and flips it using conditional assignments. The bash interpreter executes this rapid oscillation, showing how the self-referential logic traps the system in a cycle.
