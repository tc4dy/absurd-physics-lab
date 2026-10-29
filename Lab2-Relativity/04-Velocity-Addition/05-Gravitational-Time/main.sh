g=6.67430e-11
m=5.972e24
r=6371000.0
c=299792458.0

factor=$(awk -v G="$g" -v M="$m" -v R="$r" -v C="$c" 'BEGIN {
    print sqrt(1.0 - (2.0 * G * M) / (R * C * C));
}')

time_lost=$(awk -v f="$factor" 'BEGIN {
    sec_per_year = 365.25 * 24.0 * 3600.0;
    print sec_per_year * (1.0 - f);
}')

echo "Gravitational time dilation factor: $(awk -v f="$factor" 'BEGIN {printf "%.12f", f}')"
echo "Time lost per year on Earth's surface: $(awk -v t="$time_lost" 'BEGIN {printf "%.4f", t}') seconds"
