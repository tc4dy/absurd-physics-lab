fn autocatalytic_rate(p: f64, a: f64, k1: f64, k2: f64) -> f64 {
    k1 * a * p + k2 * p * p
}

fn main() {
    let a0 = 1.0;
    let p0 = 0.01;
    let k1 = 0.1;
    let k2 = 0.5;
    let dt = 0.01;
    let steps = 1000;

    let mut a = a0;
    let mut p = p0;
    println!("Initial reactant A: {}", a0);
    println!("Initial product P: {}", p0);
    println!("Rate constants: k1={}, k2={}", k1, k2);

    for i in 0..steps {
        let rate = autocatalytic_rate(p, a, k1, k2);
        let dp = rate * dt;
        p += dp;
        a -= dp;
        if i % 100 == 0 {
            println!("t = {:.2}  P = {:.6}  A = {:.6}", i as f64 * dt, p, a);
        }
    }

    println!("Final P: {:.6}  Final A: {:.6}", p, a);
}
