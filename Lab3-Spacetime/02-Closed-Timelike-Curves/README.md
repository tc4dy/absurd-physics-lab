#### This experiment models the Gödel rotating universe, demonstrating the geometric conditions under which closed timelike curves emerge. The system calculates the critical radius beyond which an observer can travel into their own past.

### Python
The Python script uses the Gödel metric condition for closed timelike curves: r > ln(1 + sqrt(2)) / omega. It takes a rotation parameter omega and computes the critical radius. For radii beyond this threshold, the script marks the region as containing closed timelike curves, showing the causal violation inherent to Gödel spacetime.

### C
The C implementation calculates the Gödel critical radius using math.h. It defines the constant ln(1 + sqrt(2)) and divides by the rotation parameter omega. The program outputs the critical radius and evaluates sample radial coordinates, confirming that the spacetime admits closed timelike curves only for r greater than the threshold.

### Rust
The Rust version uses f64 precision to compute the critical radius for the Gödel metric. It employs the natural logarithm and square root functions from the standard library. The script iterates over radial values and prints whether each is inside the causal region or the closed timelike curve region, reflecting the geometric structure of the rotating universe.

### Shell
The shell script uses awk to evaluate the Gödel critical radius formula. It passes the rotation parameter omega and a range of radial coordinates to awk, which computes the threshold. The bash script then prints the causal status of each radius, showing the transition from normal causality to closed timelike curves.
