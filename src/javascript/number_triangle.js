function GenerateTriangle(Number) {
    //Variable
    var pyramid;
    var i;
    let results = '';

    //Making piramid Use foreach
    for (i = Number; i >= 1; i--) {
        for (pyramid = 1; pyramid <= i; pyramid++) {
            results += pyramid + ' ';
        }
        console.log(results);
        results = '';
    }
}
//Call The function
GenerateTriangle(5)


/**
Output:

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/