fn main() { 
    let do_square = |len| (0..len).map(|_| "*".repeat(len)).collect::<Vec<_>>().join("\n");
    println!("{}", do_square(5))
}

/*
rustc squarepattern.rs
./squarepattern

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/