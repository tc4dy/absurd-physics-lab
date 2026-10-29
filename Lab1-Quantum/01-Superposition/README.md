#### This experiment models quantum superposition using a continuous qubit state vector. The system remains in a probabilistic state until a measurement collapses the wave function into a definite basis state.

### Python
The Python script uses a class to hold the alpha and beta amplitudes of the qubit. The measurement function calculates the probabilities by squaring these amplitudes and normalizes them to determine the collapse threshold. It relies on the standard random module to generate a float, simulating the probabilistic nature of wave function collapse, and updates the state vector accordingly.

### C
The C implementation defines a struct containing the two double-precision amplitudes. It calculates the probability amplitudes directly and uses the standard library rand function mapped to a float range to simulate the measurement. The pointer to the struct is modified in place, reflecting the irreversible nature of quantum state collapse after the observation function is called.

### Rust
The Rust version uses a struct to maintain the state vector. It leverages the rand crate to generate a random floating-point number for the measurement process. By employing mutable borrowing, it ensures that once the qubit is observed and collapses into a definite state, the original superposition is safely consumed and overwritten, reflecting strict memory safety during physical state transitions.

### Shell
The shell script handles floating-point mathematics using awk. It passes the initial amplitudes to awk to calculate the exact probability distribution and uses the awk random number generator to determine the outcome of the measurement. Once the state collapses, the variables are updated in bash to reflect the new deterministic state.
