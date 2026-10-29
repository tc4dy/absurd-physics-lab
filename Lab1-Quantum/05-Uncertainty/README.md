#### This experiment demonstrates Heisenberg's Uncertainty Principle by modeling the inverse relationship between the precision of a particle's position and its momentum. The system enforces a fundamental limit, showing that reducing the uncertainty in one variable inherently increases the uncertainty in the other.

### Python
The Python script uses a class to represent the particle's state. The measure function accepts a target precision for either position or momentum. By calculating the inverse proportionality, it simulates the physical reality where precise knowledge of one property obscures the other, returning the resulting standard deviations.

### C
The C implementation uses a struct to hold the standard deviations of position and momentum. It defines a mathematical limit mimicking the reduced Planck constant. When a measurement function is called to narrow down position, the struct is mutated in place to widen the momentum variance, strictly enforcing the physical inequality.

### Rust
The Rust version models the measurement process using a struct with floating-point fields for uncertainties. It takes a desired precision input and enforces the uncertainty principle through immutable mathematical constraints. Mutable borrowing is used to safely update both fields simultaneously, ensuring the fundamental physical limit is never violated during the simulation.

### Shell
The shell script handles the mathematical inverse relationship using awk. It takes a precision value for the position and calculates the corresponding minimum uncertainty for the momentum. The bash script uses standard input and variables to demonstrate how attempting to perfect one measurement immediately degrades the accuracy of the other.
