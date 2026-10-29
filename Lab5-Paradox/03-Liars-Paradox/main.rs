fn main() {
    let mut statement_is_true = true;
    let mut iterations = 0;

    while iterations < 10 {
        statement_is_true = !statement_is_true;
        println!("Evaluation {}: Statement is {}", iterations + 1, statement_is_true);
        iterations += 1;
    }

    println!("The system cannot stabilize.");
}
