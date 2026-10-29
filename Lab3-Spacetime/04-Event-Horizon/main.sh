G=6.67430e-11
c=299792458.0
mass=1.989e30

rs=$(awk -v G="$G" -v c="$c" -v m="$mass" 'BEGIN {
    print 2.0 * G * m / (c * c);
}')

echo "Mass: $mass kg"
echo "Schwarzschild radius: $(awk -v r="$rs" 'BEGIN {printf "%.4f", r}') m"

for factor in 2.0 1.5 1.1 1.01 1.001; do
    td=$(awk -v rs="$rs" -v f="$factor" 'BEGIN {
        r = rs * f;
        if (r <= rs) td = 0.0;
        else td = sqrt(1.0 - rs / r);
        printf "%.6f", td;
    }')
    r_val=$(awk -v rs="$rs" -v f="$factor" 'BEGIN {printf "%.4f", rs * f}')
    echo "r = $r_val m  ($factor rs)  time dilation = $td"
done
