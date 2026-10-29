fn main() {
    let mut distance = 100.0;
    let mut steps = 0;

    println!("Initial distance to target: {} meters", distance);
    println!("Beginning the infinite subdivision...");

    while distance > 1e-15 {
        distance /= 2.0;
        steps += 1;
    }

    println!("Target reached after {} subdivisions.", steps);
    println!("Final calculated distance: {:e}", distance);
}
