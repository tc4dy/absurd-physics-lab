L=1.0
c1=0.707
c2=0.707

echo "Box length: $L"
echo "Coefficients: c1=$c1, c2=$c2"

for x in 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9; do
    p=$(awk -v x="$x" -v L="$L" -v c1="$c1" -v c2="$c2" 'BEGIN {
        pi = atan2(0, -1);
        psi1 = sin(pi * x / L);
        psi2 = sin(2 * pi * x / L);
        psi = c1 * psi1 + c2 * psi2;
        printf "%.6f", psi * psi;
    }')
    echo "x = $x  probability density = $p"
done
