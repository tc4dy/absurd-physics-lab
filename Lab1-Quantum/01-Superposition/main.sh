alpha=0.8
beta=0.6

prob_alpha=$(awk "BEGIN {print $alpha * $alpha}")
prob_beta=$(awk "BEGIN {print $beta * $beta}")
total_prob=$(awk "BEGIN {print $prob_alpha + $prob_beta}")

percent_alpha=$(awk "BEGIN {printf \"%.1f\", ($prob_alpha / $total_prob) * 100}")
percent_beta=$(awk "BEGIN {printf \"%.1f\", ($prob_beta / $total_prob) * 100}")

echo "Initial state vector: [$alpha, $beta]"
echo "Probability of |0>: $percent_alpha%"
echo "Probability of |1>: $percent_beta%"

threshold=$(awk "BEGIN {print $prob_alpha / $total_prob}")
random_val=$(awk -v seed="$RANDOM" 'BEGIN {srand(seed); print rand()}')

echo "Wave function collapsing..."

is_collapsed_to_zero=$(awk -v r="$random_val" -v t="$threshold" 'BEGIN {print (r < t) ? 1 : 0}')

if [ "$is_collapsed_to_zero" -eq 1 ]; then
    alpha=1.0
    beta=0.0
    echo "Collapsed state: |0>"
else
    alpha=0.0
    beta=1.0
    echo "Collapsed state: |1>"
fi

echo "Final state vector: [$alpha, $beta]"
