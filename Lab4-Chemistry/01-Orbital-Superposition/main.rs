fn wavefunction(x: f64, l: f64, c1: f64, c2: f64) -> f64 {
    let psi1 = (std::f64::consts::PI * x / l).sin();
    let psi2 = (2.0 * std::f64::consts::PI * x / l).sin();
    c1 * psi1 + c2 * psi2
}

fn probability_density(x: f64, l: f64, c1: f64, c2: f64) -> f64 {
    let psi = wavefunction(x, l, c1, c2);
    psi * psi
}

fn main() {
    let l = 1.0;
    let c1 = 0.707;
    let c2 = 0.707;
    println!("Box length: {}", l);
    println!("Coefficients: c1={}, c2={}", c1, c2);

    for &x in &[0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9] {
        let p = probability_density(x, l, c1, c2);
        println!("x = {:.1}  probability density = {:.6}", x, p);
    }
}
