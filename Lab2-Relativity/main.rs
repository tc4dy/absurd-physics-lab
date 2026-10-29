fn calculate_contracted_length(proper_length: f64, velocity_fraction: f64) -> (f64, f64) {
    let lorentz_factor = 1.0 / (1.0 - velocity_fraction * velocity_fraction).sqrt();
    let contracted_length = proper_length / lorentz_factor;
    (lorentz_factor, contracted_length)
}

fn main() {
    let proper_length = 100.0;
    let velocity = 0.9;

    let (factor, contracted) = calculate_contracted_length(proper_length, velocity);

    println!("Velocity: {}% the speed of light", velocity * 100.0);
    println!("Proper length: {} meters", proper_length);
    println!("Lorentz factor: {:.4}", factor);
    println!("Contracted length: {:.4} meters", contracted);
}
