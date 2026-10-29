#### This experiment models molecular chirality by representing enantiomers as mirror-image coordinates. The system calculates the handedness of the molecule using a scalar triple product, demonstrating how identical atomic compositions can yield distinct stereochemical properties.

### Python
The Python script defines a simple chiral center with four substituents placed in 3D space. It computes the scalar triple product of the vectors to determine the handedness. A positive result indicates one enantiomer, and a negative result indicates its mirror image. The script prints the chirality assignment.

### C
The C implementation uses double-precision vectors to represent the substituent positions. It calculates the scalar triple product to determine the handedness of the chiral center. The program prints the result, confirming the mirror-image relationship between the two enantiomers.

### Rust
The Rust version uses f64 vectors to compute the scalar triple product. It evaluates the sign of the result to assign the chirality. The script demonstrates how the same atomic connectivity produces opposite handedness when the spatial arrangement is mirrored.

### Shell
The shell script uses awk to compute the scalar triple product from the coordinates. It passes the vector components to awk, which evaluates the determinant. The bash script then prints the chirality assignment based on the sign of the result.
