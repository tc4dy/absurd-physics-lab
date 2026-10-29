#### This experiment resolves the twin paradox by computing the proper time elapsed for both the stationary and traveling twins. The system demonstrates that the traveling twin ages less due to the relativistic time dilation over the round trip.

### Python
The Python script calculates the proper time for the traveling twin using the formula tau = 2L / (gamma * v), where gamma is the Lorentz factor. It compares this to the coordinate time elapsed for the stationary twin, 2L / v. The difference in ages is printed, showing the traveling twin is younger.

### C
The C implementation uses double-precision arithmetic to compute the Lorentz factor and the proper time for the traveling twin. It calculates the coordinate time for the stationary twin and the proper time for the moving twin. The program outputs the age difference, confirming the traveling twin returns younger.

### Rust
The Rust version computes the Lorentz factor and the proper time using f64 precision. It calculates the round-trip coordinate time and the dilated proper time for the traveling twin. The script prints the elapsed times for both twins, demonstrating the asymmetric aging predicted by special relativity.

### Shell
The shell script uses awk to compute the Lorentz factor and the proper time for the traveling twin. It passes the distance and velocity to awk, which evaluates gamma and the dilated time. The bash script then prints the age difference, showing the traveling twin is younger upon return.
