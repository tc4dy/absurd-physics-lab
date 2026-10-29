fn paradox(prediction: bool) {
    if prediction {
        loop {}
    }
}

fn main() {
    let prediction = false;
    println!("Analyzer predicts halt: {}", prediction);
    println!("Executing program...");
    paradox(prediction);
    println!("Program halted.");
}
