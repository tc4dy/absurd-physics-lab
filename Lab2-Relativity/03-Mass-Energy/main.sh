mass=0.001
c=299792458

energy=$(awk -v m="$mass" -v c="$c" 'BEGIN {print m * c * c}')

echo "Mass converted: ${mass} kg"
echo "Speed of light: ${c} m/s"
echo "Energy released: ${energy} Joules"
