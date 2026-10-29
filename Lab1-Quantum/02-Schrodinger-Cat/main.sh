decay_probability=0.5
state="superposition"

echo "Box sealed. Decay probability: 50%"
echo "Current state: $state"
echo "Opening the box to observe..."

random_val=$(awk -v seed="$RANDOM" 'BEGIN {srand(seed); print rand()}')
is_dead=$(awk -v r="$random_val" -v p="$decay_probability" 'BEGIN {print (r < p) ? 1 : 0}')

if [ "$is_dead" -eq 1 ]; then
    state="dead"
else
    state="alive"
fi

echo "Observed state: $state"
