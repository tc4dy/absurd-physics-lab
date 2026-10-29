#### This experiment models radioactive decay using the first-order exponential decay law. The system calculates the remaining fraction of a radioactive isotope over time and determines the number of half-lives elapsed.

### Python
The Python script uses the math module to compute the exponential decay N(t) = N0 * exp(-lambda * t). It calculates the decay constant from the half-life and prints the remaining activity at several time points. The output shows the characteristic halving of the material at each half-life interval.

### C
The C implementation uses math.h for the exponential function. It calculates the decay constant and evaluates the remaining fraction at specified times. The program confirms that after each half-life, exactly half of the original material remains.

### Rust
The Rust version uses f64 precision to compute the exponential decay. It derives the decay constant from the half-life and evaluates the remaining amount. The script prints the results, demonstrating the exponential nature of radioactive decay.

### Shell
The shell script uses awk to compute the exponential decay. It passes the initial amount, half-life, and time to awk, which evaluates the remaining quantity. The bash script then prints the fraction remaining at each half-life interval.
