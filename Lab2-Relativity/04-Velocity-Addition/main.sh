v1=0.8
v2=0.7

classical=$(awk -v a="$v1" -v b="$v2" 'BEGIN {print a + b}')
relativistic=$(awk -v a="$v1" -v b="$v2" 'BEGIN {print (a + b) / (1 + (a * b))}')

echo "Velocity 1: ${v1}c"
echo "Velocity 2: ${v2}c"
echo "Classical addition: ${classical}c"
echo "Relativistic addition: $(awk -v r="$relativistic" 'BEGIN {printf "%.4f", r}')c"
