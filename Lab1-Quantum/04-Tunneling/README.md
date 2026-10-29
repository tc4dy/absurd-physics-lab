#### This experiment models quantum tunneling, where a particle has a probabilistic chance to cross an energy barrier that is higher than its own kinetic energy. The system calculates the tunneling probability based on the barrier's width and height, then simulates the particle's interaction with it.

### Python
The Python script uses the math module to calculate the exponential decay of the wave function inside the barrier. It determines the tunneling probability and uses the random module to simulate whether the particle successfully penetrates the barrier or reflects back. The script clearly separates the classical impossibility from the quantum probability outcome.

### C
The C implementation relies on math.h for the exponential calculation representing the barrier penetration probability. It utilizes a struct to define the particle and barrier parameters. A standard random float generation is used to simulate the probabilistic wave function collapse, outputting whether the particle was transmitted or reflected.

### Rust
The Rust version calculates the transmission coefficient using the standard library's exponential function. It uses the rand crate to generate a random float representing the quantum probability. The state of the particle is updated via mutable borrowing, accurately reflecting the moment the particle either overcomes the barrier or gets reflected.

### Shell
The shell script uses awk to handle the complex exponential mathematics required for the tunneling probability. It calculates the transmission coefficient based on the barrier width and energy levels. A randomly generated number from bash is compared against this probability to output the final physical state of the particle.
