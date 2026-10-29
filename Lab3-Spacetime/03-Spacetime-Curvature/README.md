#### This experiment demonstrates geodesic deviation in Schwarzschild spacetime, showing how nearby freely falling trajectories diverge due to spacetime curvature. The system computes the tidal acceleration components using the Riemann tensor components of the Schwarzschild metric.

### Python
The Python script uses the geodesic deviation equations for Schwarzschild spacetime, where the radial and transverse deviations evolve according to the Riemann tensor. It calculates the tidal acceleration terms proportional to GM/r^3 and integrates the deviation over a short interval, showing the characteristic stretching and squeezing.

### C
The C implementation uses double-precision arithmetic to compute the Riemann tensor components of the Schwarzschild metric. It evaluates the radial and transverse geodesic deviation equations and integrates them numerically. The program outputs the separation between two nearby geodesics, confirming the tidal divergence predicted by general relativity.

### Rust
The Rust version implements the geodesic deviation equations using f64 precision. It computes the curvature-induced tidal terms from the Schwarzschild mass and radial coordinate. The integration of the deviation vector is performed with a simple Euler step, and the results are printed to show the divergence of adjacent trajectories.

### Shell
The shell script uses awk to calculate the Riemann tensor components and the resulting tidal accelerations. It passes the black hole mass and the initial radial separation to awk, which evaluates the geodesic deviation equations. The bash script then prints the separation as a function of proper time.
