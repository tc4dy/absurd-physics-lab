#### This experiment models the logical contradiction of the Halting Problem by simulating a program that defies any predictive analyzer. The system attempts to determine if a function will halt, but the function's logic is designed to intentionally contradict the prediction.

### Python
The Python script defines a paradoxical function that receives a boolean prediction. If the prediction is true, it enters an infinite loop; if false, it halts immediately. Because any predictor must output either true or false, feeding that prediction back into the function guarantees the prediction will always be wrong, proving undecidability.

### C
The C implementation uses an infinite while loop controlled by the prediction flag. The logic forces the program to hang if it is expected to stop, and exit if it is expected to run forever. This direct memory-level control perfectly illustrates the logical impossibility of a universal halting decider.

### Rust
The Rust version uses an explicit loop construct inside a conditional block. The type system ensures the boolean prediction is evaluated strictly before the loop begins. By inverting the expected behavior, the script demonstrates that no algorithm can safely predict the termination of this specific routine.

### Shell
The shell script uses a bash while loop that checks a prediction variable. If the prediction is true, it loops endlessly using a null command; if false, it breaks the loop. This creates a situation where the script's execution time is fundamentally unpredictable based on its own internal logic.
