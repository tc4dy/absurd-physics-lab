delta_x=1.0
delta_p=1.0

echo "Initial state: dx=$delta_x, dp=$delta_p"

measure_position() {
    local precision=$1
    delta_x=$precision
    delta_p=$(awk -v p="$precision" 'BEGIN {print 1.0 / p}')
    echo "Target position precision: $delta_x"
    echo "Forced momentum uncertainty: $(awk -v dp="$delta_p" 'BEGIN {printf "%.4f", dp}')"
}

measure_momentum() {
    local precision=$1
    delta_p=$precision
    delta_x=$(awk -v p="$precision" 'BEGIN {print 1.0 / p}')
    echo "Target momentum precision: $delta_p"
    echo "Forced position uncertainty: $(awk -v dx="$delta_x" 'BEGIN {printf "%.4f", dx}')"
}

echo "Attempting highly precise position measurement..."
measure_position 0.01

echo "Attempting highly precise momentum measurement..."
measure_momentum 0.001
