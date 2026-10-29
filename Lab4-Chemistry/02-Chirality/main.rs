fn scalar_triple_product(a: [f64; 3], b: [f64; 3], c: [f64; 3]) -> f64 {
    let cross_bc = [
        b[1] * c[2] - b[2] * c[1],
        b[2] * c[0] - b[0] * c[2],
        b[0] * c[1] - b[1] * c[0],
    ];
    a[0] * cross_bc[0] + a[1] * cross_bc[1] + a[2] * cross_bc[2]
}

fn main() {
    let center = [0.0, 0.0, 0.0];
    let sub1 = [1.0, 0.0, 0.0];
    let sub2 = [0.0, 1.0, 0.0];
    let sub3 = [0.0, 0.0, 1.0];

    let a = [sub1[0] - center[0], sub1[1] - center[1], sub1[2] - center[2]];
    let b = [sub2[0] - center[0], sub2[1] - center[1], sub2[2] - center[2]];
    let c = [sub3[0] - center[0], sub3[1] - center[1], sub3[2] - center[2]];

    let stp = scalar_triple_product(a, b, c);
    println!("Chiral center at origin");
    println!("Substituent 1: ({:.1}, {:.1}, {:.1})", sub1[0], sub1[1], sub1[2]);
    println!("Substituent 2: ({:.1}, {:.1}, {:.1})", sub2[0], sub2[1], sub2[2]);
    println!("Substituent 3: ({:.1}, {:.1}, {:.1})", sub3[0], sub3[1], sub3[2]);
    println!("Chirality: {}", if stp > 0.0 { "R" } else { "S" });
}
