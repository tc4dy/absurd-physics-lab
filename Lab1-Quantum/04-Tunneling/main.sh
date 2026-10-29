energy=5.0
barrier_height=10.0
barrier_width=0.5
state="incident"

echo "Particle energy: ${energy} eV"
echo "Barrier height: ${barrier_height} eV, Width: ${barrier_width} nm"

if awk "BEGIN {exit !($energy >= $barrier_height)}"; then
    state="transmitted"
    echo "Classical regime: Particle passes over the barrier."
else
    transmission_prob=$(awk -v e="$energy" -v h="$barrier_height" -v w="$barrier_width" 'BEGIN {
        kappa = sqrt(2.0 * (h - e));
        print exp(-2.0 * kappa * w);
    }')
    
    percent=$(awk -v p="$transmission_prob" 'BEGIN {printf "%.4f", p * 100}')
    echo "Quantum tunneling probability: ${percent}%"
    
    random_val=$(awk -v seed="$RANDOM" 'BEGIN {srand(seed); print rand()}')
    
    is_transmitted=$(awk -v r="$random_val" -v p="$transmission_prob" 'BEGIN {print (r < p) ? 1 : 0}')
    
    if [ "$is_transmitted" -eq 1 ]; then
        state="transmitted"
    else
        state="reflected"
    fi
fi

echo "Final state: $state"
