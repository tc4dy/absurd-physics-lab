name_a="name_b"
name_b="name_a"

value_a="${!name_a}"
value_b="${!name_b}"

echo "Entities created."
echo "Entity A resolves to: $value_a"
echo "Entity B resolves to: $value_b"
echo "The causal loop is closed. Neither object has an independent origin."
