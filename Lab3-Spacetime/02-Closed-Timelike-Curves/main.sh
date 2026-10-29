omega=1.0

rc=$(awk -v o="$omega" 'BEGIN {
    print log(1.0 + sqrt(2.0)) / o;
}')

echo "Gödel rotation parameter omega: $omega"
echo "Critical radius for CTCs: $(awk -v r="$rc" 'BEGIN {printf "%.4f", r}')"

for r in 0.5 1.0 1.2 1.5 2.0; do
    status=$(awk -v r="$r" -v rc="$rc" 'BEGIN {
        print (r > rc) ? "CTC region" : "causal region";
    }')
    echo "r = $r  $status"
done
