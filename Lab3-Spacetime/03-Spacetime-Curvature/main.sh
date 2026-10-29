G=6.67430e-11
M=1.989e30
r=1.0e7
x_parallel=1.0
x_perp=1.0
dt=1.0e-4
steps=1000

echo "Black hole mass: $M kg"
echo "Radial coordinate: $r m"
echo "Initial radial separation: $x_parallel m"
echo "Initial transverse separation: $x_perp m"

result=$(awk -v G="$G" -v M="$M" -v r="$r" -v xp="$x_parallel" -v xt="$x_perp" -v dt="$dt" -v n="$steps" 'BEGIN {
    factor = G * M / (r * r * r);
    a_parallel = 2.0 * factor;
    a_perp = -factor;
    for (i = 0; i < n; i++) {
        xp += 0.5 * a_parallel * dt * dt;
        xt += 0.5 * a_perp * dt * dt;
    }
    printf "%.6e %.6e", xp, xt;
}')

echo "Final radial separation: $(echo "$result" | cut -d' ' -f1) m"
echo "Final transverse separation: $(echo "$result" | cut -d' ' -f2) m"
