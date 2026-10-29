proper_time=10.0
velocity=0.8

factor=$(awk -v v="$velocity" 'BEGIN {print 1.0 / sqrt(1.0 - v*v)}')
dilated=$(awk -v t="$proper_time" -v f="$factor" 'BEGIN {print t * f}')
percent=$(awk -v v="$velocity" 'BEGIN {print v * 100}')

echo "Velocity: ${percent}% the speed of light"
echo "Proper time on spaceship: ${proper_time} years"
echo "Lorentz factor: $(awk -v f="$factor" 'BEGIN {printf "%.4f", f}')"
echo "Time passed on Earth: $(awk -v d="$dilated" 'BEGIN {printf "%.4f", d}') years"
