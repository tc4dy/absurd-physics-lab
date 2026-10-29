#### This experiment simulates relativistic time dilation by calculating the Lorentz factor for an object moving at relativistic speeds. The system shows how time passes slower for the moving observer compared to a stationary frame.

### Python
The Python script relies on the math module to calculate the Lorentz factor based on the object's velocity relative to the speed of light. It takes a given proper time and divides it by the Lorentz factor to determine the dilated time. The script prints both the stationary time and the slowed-down moving time to clearly illustrate the effect.

### C
The C implementation uses math.h for the square root calculation required by the Lorentz transformation. It defines the speed of light as a double-precision constant to maintain scientific accuracy. The script calculates the time dilation factor and outputs the comparative times using standard formatted printing.

### Rust
The Rust version uses the standard f64 primitive type for high-precision floating-point calculations. It computes the Lorentz factor using the built-in square root method. The code ensures strict type safety while mathematically demonstrating the divergence between the observer's proper time and the moving frame's time.

### Shell
The shell script handles the relativistic math using awk. It passes the velocity as a fraction of the speed of light to awk to compute the Lorentz factor and the resulting dilated time. The bash script then outputs the formatted results, showing the increasing time discrepancy as velocities approach the speed of light.
