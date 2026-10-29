fn remaining_amount(n0: f64, half_life: f64, t: f64) -> f64 {
    let lam = 2.0_f64.ln() / half_life;
    n0 * (-lam * t).exp()
}

fn main() {
    let n0 = 100.0;
    let half_life = 5.0;
    println!("Initial amount: {}", n0);
    println!("Half-life: {} years", half_life);

    for &t in &[0.0, 5.0, 10.0, 15.0, 20.0, 25.0, 30.0] {
        let n = remaining_amount(n0, half_life, t);
        println!("t = {:3.0} years  remaining = {:.4}  ({:.1}%)", t, n, (n / n0) * 100.0);
    }
}
