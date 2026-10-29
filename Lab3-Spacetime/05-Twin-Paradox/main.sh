L=10.0
v=0.8

gamma=$(awk -v v="$v" 'BEGIN {print 1.0 / sqrt(1.0 - v * v)}')
t_stationary=$(awk -v L="$L" -v v="$v" 'BEGIN {print 2.0 * L / v}')
t_traveler=$(awk -v L="$L" -v v="$v" -v g="$gamma" 'BEGIN {print 2.0 * L / (g * v)}')
diff=$(awk -v a="$t_stationary" -v b="$t_traveler" 'BEGIN {print a - b}')

echo "Distance to destination: $L light-years"
echo "Velocity: ${v}c"
echo "Lorentz factor: $(awk -v g="$gamma" 'BEGIN {printf "%.4f", g}')"
echo "Stationary twin elapsed time: $(awk -v t="$t_stationary" 'BEGIN {printf "%.4f", t}') years"
echo "Traveling twin elapsed time: $(awk -v t="$t_traveler" 'BEGIN {printf "%.4f", t}') years"
echo "Age difference: $(awk -v d="$diff" 'BEGIN {printf "%.4f", d}') years"
