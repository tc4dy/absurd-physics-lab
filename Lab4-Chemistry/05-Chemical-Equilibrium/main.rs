fn solve_equilibrium(a0: f64, b0: f64, c0: f64, k: f64) -> (f64, f64, f64) {
    let mut x = 0.0;
    let dx = 0.001;
    for _ in 0..10000 {
        let a = a0 - x;
        let b = b0 - x;
        let c = c0 + x;
        if a <= 0.0 || b <= 0.0 {
            break;
        }
        let q = c / (a * b);
        if (q - k).abs() < 1e-6 {
            break;
        }
        if q < k {
            x += dx;
        } else {
            x -= dx;
        }
    }
    (a0 - x, b0 - x, c0 + x)
}

fn main() {
    let a0 = 1.0;
    let b0 = 1.0;
    let c0 = 0.0;
    let k = 4.0;

    println!("Initial concentrations: A={}, B={}, C={}", a0, b0, c0);
    println!("Equilibrium constant K = {}", k);

    let (a, b, c) = solve_equilibrium(a0, b0, c0, k);
    let q = c / (a * b);

    println!("Equilibrium concentrations: A={:.6}, B={:.6}, C={:.6}", a, b, c);
    println!("Reaction quotient Q = {:.6}", q);
}
