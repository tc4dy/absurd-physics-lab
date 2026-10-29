r0=1.0

echo "Wormhole throat radius: $r0"

for r in 1.0 1.5 2.0 3.0 5.0 10.0; do
    result=$(awk -v r="$r" -v r0="$r0" 'BEGIN {
        b = (r0 * r0) / r;
        printf "%.4f %.4f %d", b, (r > b), (b < r);
    }')
    b_val=$(echo "$result" | cut -d' ' -f1)
    echo "r = $r  b(r) = $b_val  b(r) < r: $(echo "$result" | cut -d' ' -f2)"
done
