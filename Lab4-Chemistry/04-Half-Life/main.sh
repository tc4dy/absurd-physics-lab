N0=100.0
half_life=5.0

echo "Initial amount: $N0"
echo "Half-life: $half_life years"

for t in 0 5 10 15 20 25 30; do
    result=$(awk -v N0="$N0" -v hl="$half_life" -v t="$t" 'BEGIN {
        lam = log(2.0) / hl;
        N = N0 * exp(-lam * t);
        pct = (N / N0) * 100.0;
        printf "%.4f %.1f", N, pct;
    }')
    N_val=$(echo "$result" | cut -d' ' -f1)
    pct_val=$(echo "$result" | cut -d' ' -f2)
    printf "t = %3d years  remaining = %s  (%s%%)\n" "$t" "$N_val" "$pct_val"
done
