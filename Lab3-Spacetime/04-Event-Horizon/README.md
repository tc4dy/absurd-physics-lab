#### This experiment simulates the Schwarzschild event horizon by calculating the radius at which the escape velocity equals the speed of light. The system demonstrates that at this radius, the time dilation factor becomes zero and any signal is infinitely redshifted.

### Python
The Python script calculates the Schwarzschild radius rs = 2GM/c^2 for a given mass. It then computes the time dilation factor sqrt(1 - rs/r) for a range of radial coordinates, showing that the factor approaches zero as r approaches rs. At the horizon, the script flags the divergence, reflecting the infinite redshift.

### C
The C implementation uses double-precision arithmetic to compute the Schwarzschild radius and the time dilation factor. It evaluates the factor for radii approaching the horizon from outside, printing the decreasing values. The program confirms that proper time intervals vanish at the horizon, as predicted by general relativity.

### Rust
The Rust version calculates the Schwarzschild radius and the time dilation factor using f64 precision. It iterates over radial coordinates and computes sqrt(1 - rs/r), printing the results. The script demonstrates the infinite redshift at the horizon by showing the time dilation factor approaching zero.

### Shell
The shell script uses awk to compute the Schwarzschild radius and the time dilation factor. It passes the mass and a range of radial coordinates to awk, which evaluates sqrt(1 - rs/r). The bash script then prints the results, showing the vanishing time dilation at the event horizon.
