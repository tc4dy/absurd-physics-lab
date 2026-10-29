fn relativistic_addition(v1: f64, v2: f64) -> f64 {
    (v1 + v2) / (1.0 + (v1 * v2))
}

fn main() {
    let v1 = 0.8;
    let v2 = 0.7;
    
    let classical = v1 + v2;
    let relativistic = relativistic_addition(v1, v2);
    
    println!("Velocity 1: {}c", v1);
    println!("Velocity 2: {}c", v2);
    println!("Classical addition: {}c", classical);
    println!("Relativistic addition: {:.4}c", relativistic);
}
