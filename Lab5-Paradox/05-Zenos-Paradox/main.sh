distance=100.0
steps=0

echo "Initial distance to target: ${distance} meters"
echo "Beginning the infinite subdivision..."

while awk -v d="$distance" 'BEGIN {exit !(d > 1e-15)}'; do
    distance=$(awk -v d="$distance" 'BEGIN {print d / 2.0}')
    steps=$((steps + 1))
done

echo "Target reached after $steps subdivisions."
echo "Final calculated distance: $distance"
