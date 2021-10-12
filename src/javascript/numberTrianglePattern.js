var i, j
var string = ""

for(i=1; i<=5; i++){
    for(j=i; j<=i; j++){
        string +=j
    }
    console.log(string)
}

// Pattern
// 1
// 12
// 123
// 1234
// 12345