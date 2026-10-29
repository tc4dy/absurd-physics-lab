result=$(awk 'BEGIN {
    a0 = 1.0; b0 = 1.0; c0 = 0.0;
    K = 4.0;
    x = 0.0;
    dx = 0.001;
    
    printf "Initial concentrations: A=1.0, B=1.0, C=0.0\n";
    printf "Equilibrium constant K = 4.0\n";
    
    for (i = 0; i < 10000; i++) {
        a = a0 - x;
        b = b0 - x;
        c = c0 + x;
        if (a <= 0 || b <= 0) break;
        Q = c / (a * b);
        if (Q - K < 1e-6 && K - Q < 1e-6) break;
        if (Q < K) x += dx;
        else x -= dx;
    }
    
    a = a0 - x;
    b = b0 - x;
    c = c0 + x;
    Q = c / (a * b);
    
    printf "Equilibrium concentrations: A=%.6f, B=%.6f, C=%.6f\n", a, b, c;
    printf "Reaction quotient Q = %.6f\n", Q;
}')
echo "$result"
