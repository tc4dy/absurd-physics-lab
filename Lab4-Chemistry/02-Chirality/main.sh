stp=$(awk 'BEGIN {
    a1 = 1.0; a2 = 0.0; a3 = 0.0;
    b1 = 0.0; b2 = 1.0; b3 = 0.0;
    c1 = 0.0; c2 = 0.0; c3 = 1.0;
    cross1 = b2 * c3 - b3 * c2;
    cross2 = b3 * c1 - b1 * c3;
    cross3 = b1 * c2 - b2 * c1;
    stp = a1 * cross1 + a2 * cross2 + a3 * cross3;
    print stp;
}')

echo "Chiral center at origin"
echo "Substituent 1: (1.0, 0.0, 0.0)"
echo "Substituent 2: (0.0, 1.0, 0.0)"
echo "Substituent 3: (0.0, 0.0, 1.0)"

if awk -v s="$stp" 'BEGIN {exit !(s > 0)}'; then
    echo "Chirality: R"
else
    echo "Chirality: S"
fi
