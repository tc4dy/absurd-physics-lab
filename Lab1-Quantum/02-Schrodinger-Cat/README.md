#### This experiment simulates the Schrödinger's cat thought experiment using a probabilistic state machine. The system remains in a dual superposition of states until an observation function triggers a wave function collapse based on a simulated radioactive decay probability.

### Python
The Python script models the box as a class holding the decay probability and a state variable. The observe method uses the random module to simulate radioactive decay. If the generated float exceeds the decay probability, the state collapses to alive; otherwise, it collapses to dead, mimicking the irreversible nature of measurement.

### C
The C implementation defines a struct containing the decay probability and an integer flag for the collapsed state. It uses the standard rand function mapped to a float to determine the decay event. The observation function mutates the struct in place, ensuring that once the box is opened, the deterministic state is locked.

### Rust
The Rust version leverages an Option type to represent the uncollapsed superposition. When the observe method is called, the rand crate generates a float to simulate the decay. Rust's mutable borrowing ensures that the act of observation safely consumes the dual state and replaces it with a definitive string.

### Shell
The shell script uses awk to handle the probability mathematics. The initial state is represented as a string holding both possible outcomes. When the observe function is invoked, awk generates a random float and compares it against the decay probability, updating the bash variable to reflect the final, collapsed reality.
