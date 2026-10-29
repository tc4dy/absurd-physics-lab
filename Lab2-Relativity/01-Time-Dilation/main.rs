fn calculate_dilated_time(proper_time: f64, velocity_fraction: f64) -> (f64, f64) {
    let lorentz_factor = 1.0 / (1.0 - velocity_fraction * velocity_fraction).sqrt();
    let dilated_time = proper_time * lorentz_factor;
    (lorentz_factor, dilated_time)
}

fn main() {
    let proper_time = 10.0;
    let velocity = 0.8;

    let (factor, dilated) = calculate_dilated_time(proper_time, velocity);

    println!("Velocity: {}% the speed of light", velocity * 100.0);
    println!("Proper time on spaceship: {} years", proper_time);
    println!("Lorentz factor: {:.4}", factor);
    println!("Time passed on Earth: {:.4} years", dilated);
}
