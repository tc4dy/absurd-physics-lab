#### This experiment demonstrates relativistic velocity addition, showing that adding two velocities does not simply yield their sum. The system calculates the combined velocity of an object moving relative to a frame that is also moving.

### Python
The Python script calculates the relativistic velocity addition using the formula (v + u) / (1 + vu/c^2). It takes two velocity fractions relative to the speed of light and returns the combined relativistic velocity. The script proves that the result will never exceed the speed of light, unlike classical addition.

### C
The C implementation performs the velocity addition using double-precision floating-point variables. It applies the relativistic formula directly, ensuring the denominator scales correctly as velocities approach the speed of light. The output demonstrates the saturation of velocity at the cosmic speed limit.

### Rust
The Rust version uses 64-bit floats to safely calculate the relativistic sum of two high-speed velocities. The mathematical expression uses Rust's strict operator precedence to accurately compute the denominator. The resulting velocity is printed to show how it approaches but never reaches the speed of light.

### Shell
The shell script delegates the mathematical calculation to awk to handle the floating-point arithmetic. It passes both velocity fractions to the awk formula and evaluates the combined speed. The bash script displays the classical velocity sum alongside the relativistic sum for comparison.
