#### This experiment models a reversible chemical reaction reaching equilibrium. The system computes the equilibrium constant and simulates the approach to equilibrium from different initial concentrations, demonstrating Le Chatelier's principle.

### Python
The Python script defines a simple reaction A + B <-> C with an equilibrium constant K. It uses an iterative solver to find the equilibrium concentrations starting from specified initial amounts. The script prints the initial and final concentrations, showing how the system shifts to satisfy the equilibrium expression.

### C
The C implementation uses a numerical bisection method to solve the equilibrium equation. It calculates the reaction quotient Q and compares it to K, adjusting the extent of reaction until convergence. The program prints the final concentrations, confirming that Q equals K at equilibrium.

### Rust
The Rust version uses f64 precision to solve the equilibrium equation iteratively. It starts from initial concentrations and updates the reaction extent until the equilibrium condition is satisfied. The script prints the results, demonstrating the dynamic balance of forward and reverse rates.

### Shell
The shell script uses awk to perform the iterative equilibrium calculation. It passes the initial concentrations and the equilibrium constant to awk, which solves for the extent of reaction. The bash script then prints the final concentrations and the reaction quotient.
