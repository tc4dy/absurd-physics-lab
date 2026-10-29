particle_a="unknown"
particle_b="unknown"
is_collapsed=0

echo "Entangled pair created. State is a shared superposition."
echo "Particle A moved to Earth. Particle B moved to Mars."

measure_a() {
    if [ "$is_collapsed" -eq 0 ]; then
        r=$((RANDOM % 2))
        if [ "$r" -eq 0 ]; then
            particle_a="up"
            particle_b="down"
        else
            particle_a="down"
            particle_b="up"
        fi
        is_collapsed=1
    fi
}

echo "Measuring Particle A..."
measure_a
echo "Particle A observed as: $particle_a"

echo "Checking Particle B instantaneously..."
echo "Particle B observed as: $particle_b"
