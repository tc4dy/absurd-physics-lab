#### This experiment models quantum entanglement by simulating a pair of particles in a shared superposition. Measuring one particle instantly collapses the state of both, demonstrating non-local correlation across a spatial separation.

### Python
The Python script defines an entangled pair where the states are initially unset to represent the shared wave function. When the first particle is measured, the random module determines its spin, and the script instantly sets the second particle to the opposite spin. The second measurement simply returns the already-determined correlated state, reflecting the non-local collapse.

### C
The C implementation uses a struct to track the correlated states of both particles and a boolean flag for the observation. It uses the rand function to determine the first particle's state upon measurement. Once the struct is mutated by the first observation, the second particle's state is locked in memory, ensuring the instantaneous correlation is preserved.

### Rust
The Rust version utilizes Option types to represent the uncertainty of the entangled state before measurement. The rand crate is used to collapse the first particle's state, which simultaneously populates the second particle's Option. Mutable borrowing ensures that the entangled system is safely updated as a whole when the non-local observation occurs.

### Shell
The shell script models the particles using standard bash variables, initially set to a neutral state. When the first measurement is triggered, it uses the bash random number generator to pick a spin for the first particle and immediately assigns the inverse to the second. The subsequent read of the second particle simply reflects this pre-calculated deterministic relationship.
