state="true"
iterations=0

while [ "$iterations" -lt 10 ]; do
    if [ "$state" = "true" ]; then
        state="false"
    else
        state="true"
    fi
    
    count=$((iterations + 1))
    echo "Evaluation $count: Statement is $state"
    iterations=$count
done

echo "The system cannot stabilize."
