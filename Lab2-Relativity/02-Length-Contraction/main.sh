proper_length=100.0
velocity=0.9

factor=$(awk -v v="$velocity" 'BEGIN {print 1.0 / sqrt(1.0 - v*v)}')
contracted=$(awk -v l="$proper_length" -v f="$factor" 'BEGIN {print l / f}')
percent=$(awk -v v="$velocity" 'BEGIN {print v * 100}')

echo "Velocity: ${percent}% the speed of light"
echo "Proper length: ${proper_length} meters"
echo "Lorentz factor: $(awk -v f="$factor" 'BEGIN {printf "%.4f", f}')"
echo "Contracted length: $(awk -v c="$contracted" 'BEGIN {printf "%.4f", c}') meters"
