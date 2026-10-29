result=$(awk 'BEGIN {
    a = 1.0;
    p = 0.01;
    k1 = 0.1;
    k2 = 0.5;
    dt = 0.01;
    steps = 1000;
    
    printf "Initial reactant A: 1.0\n";
    printf "Initial product P: 0.01\n";
    printf "Rate constants: k1=0.1, k2=0.5\n";
    
    for (i = 0; i < steps; i++) {
        rate = k1 * a * p + k2 * p * p;
        dp = rate * dt;
        p += dp;
        a -= dp;
        if (i % 100 == 0) {
            printf "t = %.2f  P = %.6f  A = %.6f\n", i * dt, p, a;
        }
    }
    printf "Final P: %.6f  Final A: %.6f\n", p, a;
}')
echo "$result"
